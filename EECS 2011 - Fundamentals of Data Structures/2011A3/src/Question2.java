/**
 * 
 * Name : Kevin Shen
 * Login: kshen94
 * Student #: 212298535
 * 
 */

public class Question2 {
	
	public void balance(Node n){ //insert root
		if(n = null)
			return;
		balance(n.left);		//postorder traversal
		balance(n.right);		
		int bal = findBalanceFactor(n);
		if(bal == 0)			//if balanced return
			return;
		if(bal > 1){			//imbalance left
			if(findBalanceFactor(n.left)> 0)	//left subtree same slant 
				rotate n to the right;					
			else{
				rotate n.left to the left;				//left subtree opposite slant
				rotate n to the right;
			}
		}
		if(bal < -1){			//imbalance right
			if(findBalanceFactor(n.right) < 0)	//right subtree same slant
				rotate n to the left;
			else{								//right subtree opposite slant
				rotate n.right to the right;
				rotate n to the left;
			}
		}
		print(n.element + abs(findBalanceFactor(n)));	//prints node and balance factor
	}
	
	public int findBalanceFactor(Node n){	//returns the balance factor of the node
		int left;
		int right
		left = height of left subtree;		//find the height of the left subtree
		right = height of right subtree;	//find the height of the right subtree
		return left - right;
	}
}

/**
Balancing the tree requires T(n) to traverse the node and T(1) to balance the node
The findBalanceFactor method requires avg T(log n) to return the balance factor
T(n) * T(log n ) = O(nlogn)
 **/
