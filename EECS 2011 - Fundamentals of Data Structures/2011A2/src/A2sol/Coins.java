package A2sol;
/**
 * 
 * Name : Kevin Shen
 * Login: kshen94
 * Student #: 212298535
 * 
 */
import java.util.Scanner;
public class Coins extends Utility{
	
	public Coins(){
		System.out.println("Enter a positive amount in cents: ");
		Scanner sc = new Scanner(System.in);
		int cents = sc.nextInt();
		ways(cents);
	}
	public static void main(String[] args) {
		new Coins();

	}

}
