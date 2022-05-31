//Kevin Shen, 212298535
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class A02MiddleTier {
	//Database parameters
	String DATABASE_DRIVER = "com.mysql.cj.jdbc.Driver";
	String DATABASE_URL = "jdbc:mysql://localhost:3306/a02schema";
	String USERNAME = "root";
	String PASSWORD = "";
	
	//Query
	String confDates="";
	String actDates = "";
	String confQuery ="";
	String journalQuery = "";
	String bookQuery = "";
	String query = "";
	
	//Connection
	Connection connection;
	Statement statement;
	ResultSet rs;
	
	//Connect to database using parameters
	public Connection connect() {
	    if (connection == null) {
	        try {
	        	
	            Class.forName(DATABASE_DRIVER);
	            connection = DriverManager.getConnection(DATABASE_URL, USERNAME, PASSWORD);
	        } catch (ClassNotFoundException|SQLException e) {
	            e.printStackTrace();
	        }
	    }
	    return connection;
	}
	
	//disconnect from database
    public void disconnect() {
        if (connection != null) {
            try {
                connection.close();
                connection = null;
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }
    }
    
    //formats activityDate and evDate
    public void setDates(String fDate,String tDate) {
    	if(tDate.isBlank() && fDate.isBlank());
    	else if(tDate.isBlank()) {
    		actDates = " AND ActivityDate>\""+fDate+"\"";
    		confDates = " evDate>\""+fDate+"\"";
    	}
    	else if(fDate.isBlank()) {
    		actDates = " AND ActivityDate<\""+tDate+"\"";
    		confDates = " evDate<\""+tDate+"\"";
    	}
    	else {
    		actDates = " AND ActivityDate>\""+fDate+"\" AND ActivityDate<\""+tDate+"\"";
    		confDates = " evDate>\""+fDate+"\" AND evDate<\""+tDate+"\"";
    	}
    }
    
	//formats a query for each check boxes selected
    public void setQuery(Boolean eventConference,Boolean eventJournal,Boolean eventBook,Boolean allDates) {
    	if(eventConference) {
    		if(allDates)
    			confQuery = "(SELECT min(evDate) as date, eventID FROM EventConference ";
    		else
    			confQuery = "(SELECT min(evDate) as date, eventID FROM EventConference WHERE "+confDates;	
    		confQuery=confQuery+"GROUP BY eventID) ";
    	}
    	if(eventJournal) {
    		if(allDates)
    			journalQuery = "(SELECT min(ActivityDate) as date, eventJournal.eventID FROM EventJournal,ActivityHappens WHERE EventJournal.EventID=ActivityHappens.EventID ";
    		else
    			journalQuery = "(SELECT min(ActivityDate) as date, eventJournal.eventID FROM EventJournal,ActivityHappens WHERE EventJournal.EventID=ActivityHappens.EventID "+actDates;	
    		journalQuery = journalQuery+"GROUP BY eventJournal.EventID) ";
    	}
    	if(eventBook) {
    		if(allDates)
    			bookQuery = "(SELECT min(ActivityDate) as date, eventBook.eventID FROM EventBook,ActivityHappens WHERE EventBook.EventID=ActivityHappens.EventID ";    		
    		else
    			bookQuery = "(SELECT min(ActivityDate) as date, eventBook.eventID FROM EventBook,ActivityHappens WHERE EventBook.EventID=ActivityHappens.EventID "+actDates;
    		bookQuery = bookQuery+"GROUP BY eventBook.EventID) ";
    		}
    }
    
    public void unionQueries(Boolean eventConference,Boolean eventJournal,Boolean eventBook) {
    	//the count is to make the code not look like a mess
    	int count =0;
    	if(eventConference) count++;
    	if(eventJournal) count++;
    	if(eventBook) count++;
    	//unions selected queries
    	if(count==1) {
    		query="WITH result as(";
    		if(eventConference)
    			query=query+confQuery;
    		else if(eventBook)
    			query=query+bookQuery;	
    		else
    			query=query+journalQuery;
    		query=query+")(SELECT ID,Name,EventWebLink,CFPText FROM result,event WHERE eventid=id);";
    	}else if(count==2) {
    		if(!eventConference) 
    			query="WITH result as("+journalQuery + "UNION " +bookQuery;
    		else if(!eventJournal) 
    			query="WITH result as("+confQuery+ "UNION "+bookQuery;
    		else if(!eventBook)
    			query="WITH result as("+confQuery+ "UNION " +journalQuery;
    		query=query+")(SELECT ID,Name,EventWebLink,CFPText FROM result,event WHERE eventid=id);";
    	}else if(count==3) {
    		query="WITH result as("+journalQuery +"UNION " + bookQuery + "UNION " + confQuery 
    				+ ")(SELECT ID,Name,EventWebLink,CFPText FROM result,event WHERE eventid=id);";
    	}
    }
    
    //checks for empty query and returns "Empty Query" if it is, connects to database to run a query, then disconnects from database and returns the query as a string
    public String queryDatabase() {
    	String result="";
    	System.out.println(query);
    	if(query.isBlank())
    		result="Empty Query";
    	else {
    		try {
    			Statement statement = connect().createStatement();
    			ResultSet rs = statement.executeQuery(query);
    			for(int r= 1;r<=4;r++) {
    				result=result+rs.getMetaData().getColumnName(r)+"\t";
    			}
    			result=result+"\n";
    			while(rs.next()) {
    				int numColumns = rs.getMetaData().getColumnCount();
    				for ( int i = 1 ; i <= numColumns ; i++ ) {
    					if(i<numColumns)
    						result = result + rs.getObject(i) + ", ";
    					else
    						result= result + rs.getObject(i) + "\n";
    				}
    			}
    		} catch (SQLException e) {
	        e.printStackTrace();
    		} finally {
    			disconnect();
    		}
    	}
    	return result;
    }
    

	public String query(String fDate,String tDate,Boolean eventConference,Boolean eventJournal,Boolean eventBook,Boolean allDates) {
		//Initializes values
    	confDates="";
    	actDates = "";
    	confQuery ="";
    	journalQuery = "";
    	bookQuery = "";
    	query = "";
		
		setDates(fDate,tDate);
		setQuery(eventConference,eventJournal,eventBook,allDates);
		unionQueries(eventConference,eventJournal,eventBook);
		return queryDatabase();

	}
}
