package A1;

public class InvalidWindowException extends Exception{
	
	public InvalidWindowException(){
	}
	public  InvalidWindowException(String text){
		super(text);
	}
	public InvalidWindowException(Throwable cause){
		super(cause);
	}
	public InvalidWindowException(String text, Throwable cause){
		super(text,cause);
	}
	public InvalidWindowException(String text, Throwable cause, boolean enableSuppression, boolean writableStackTrace){
		super(text, cause, enableSuppression, writableStackTrace);
	}
}
