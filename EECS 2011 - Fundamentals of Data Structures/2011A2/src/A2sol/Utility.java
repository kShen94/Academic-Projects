package A2sol;
/**
 * 
 * Name : Kevin Shen
 * Login: kshen94
 * Student #: 212298535
 * 
 */
public class Utility {
	int counter = 1;
	public void ways(int money){
		ways(money,0,0,0,0);
		
	}
	
	public void ways(int money, int penny, int nickel, int dime, int quarter){
		if(money == 0){
			output(penny,nickel, dime, quarter);
		}
		if(money < 0){
			return;
		}
		if(penny == 25)
			ways(money, penny -25, nickel, dime, quarter +1);
		if(penny ==10)
			ways(money, penny -10, nickel, dime +1, quarter);
		if(penny == 5 && dime ==0)
			ways(money, penny -5, nickel +1,dime,quarter);
		ways(money -1, penny +1, nickel, dime, quarter);
		
	}
	
	public void output(int penny, int nickel, int dime, int quarter){
		System.out.print(counter + ") ");
		if(quarter == 1)
			System.out.print("1 quarter, ");
		if(quarter > 1)
			System.out.print( quarter + " quarters, ");
		if(dime == 1)
			System.out.print("1 dime, ");
		if (dime > 1)
			System.out.print(dime + " dimes, ");
		if(nickel == 1)
			System.out.print("1 nickel, ");
		if(nickel >1)
			System.out.print(nickel + " nickels, ");
		if(penny ==1)
			System.out.println("1 penny");
		if(penny > 1)
			System.out.println(penny + " pennies");
		if(penny == 0)
			System.out.println("");
		counter++;
	}
}
