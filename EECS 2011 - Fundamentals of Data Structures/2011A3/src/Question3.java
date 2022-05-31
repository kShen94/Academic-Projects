/**
 * 
 * Name : Kevin Shen
 * Login: kshen94
 * Student #: 212298535
 * 
 */

public class Question3 {

	public void prioritySearchTree(Node n){
		if(n == null) return;
		prioritySearchTree(n.left);
		prioritySearchTree(n.right);		//postorder traversal
		if (a leaf node) return;
		n = maxY(n.left, n.right); 			//set pointer to the larger y value of the 2 subtrees
		while(n != null)
			traverse subtree of larger value;
			if(n = top(n)){					//if the pointer is the same as top(of same node)
				if(both leaves are equal or greater than top(n))	//if both child are already used set to null
				n = null
				else										// otherwise set node to next largest value
					n = largest value less than top(n);		
			}
	}
	
}

/**
	The method traverses the tree in postorder and it will compare each node for the larger Y value and pull it up
	The postorder traversal requires T(n) and the correction after finding the max value requires T(logn).
	T(n) * T(logn) = O(nlogn)

**/