package A2sol;
/**
 * 
 * Name : Kevin Shen
 * Login: kshen94
 * Student #: 212298535
 * 
 */
import java.util.Arrays;

public class Hypercube extends Utility{

	public class Corner{
		boolean visit;
		boolean[] coordinate;
		Corner[] neighbor;
		public Corner(int n){
			visit = false;
			coordinate = new boolean[n];
			neighbor = new Corner[n];
		}
		
		public Corner(int n, boolean[] b){
			visit = false;
			coordinate = b;
			neighbor = new Corner[n];
		}
		
	}
	Corner corner;
	public Hypercube(){
	}
	
	public Hypercube(int n){
		corner = new Corner(n);
		Arrays.fill(corner.coordinate, false);
	}
	
	public void buildCube(Corner c,int n){
		for(int x =0; x <n; x++){
			boolean[] temp = c.coordinate;
			if(c.neighbor[x]== null){
				temp[x]= !temp[x];
				Corner next = cornerSearch(corner,temp,n);
				if(next == null){
					c.neighbor[x] = new Corner(n,temp);
				}
			}
		}
		
	}
	
	public Corner cornerSearch(Corner c, boolean[] b, int n){
		if(c.coordinate.equals(b))
			return c;
		else{
			for(int x = 0; x < n; x++){
				if(c.neighbor[x] == null)
					continue;
				cornerSearch(c.neighbor[x], b, n);
			}
		}
		return null;
	}

	public static void main(String[] args) {
		new Hypercube();

	}

}
