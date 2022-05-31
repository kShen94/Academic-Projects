package A1;

public class Window{
	protected double left;
	protected double right;
	protected double top;
	protected double bottom;
	
	
	public Window(double left, double right, double top, double bottom){
		this.left = left;
		this.right = right;
		this.top = top;
		this.bottom = bottom;
		
	}
	
	public double getLeft(){
		return left;
	}
	
	public double getRight(){
		return right;
	}	
	
	public double getTop(){
		return top;
	}
	
	public double getBottom(){
		return bottom;
	}
	
	public void setLeft(double value){
		left = value;
	}
	
	public void setRight(double value){
		right = value;
	}
	
	public void setTop(double value){
		top = value;
	}
	
	public void setBottom(double value){
		bottom = value;
	}
	
}
