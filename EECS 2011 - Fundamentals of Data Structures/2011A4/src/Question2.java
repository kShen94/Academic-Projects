/**
 * Name: Kevin Shen
 * EECS Account: kshen94
 * Student ID: 212298535
 */

public class Question2 {
		public countRange(k1,k2){
			count = tree.size;
			Node left = tree;
			Node right;
			while(left != null){				//traverse left side of tree
				if(left == k1){					//if key is found, subtract size by left subtree
					count -= left.left.size;
				}
				if(left.left >k1 )				//keep going left until a smaller key is found
					left = left.left;
				else if{						//when smaller key is found
					count -= left.left.size;	//subtract the size	by left subtree
					left = left.right			//traverse right
				}
			}
		}
			while(right != null){
				//do the same as above while loop
				//but mirrored for right side
			
			}
		return count;
}

/**
*	This is in O(h) time because each side does a comparison once per height level
*	until the key or a null is found. So worst case is accessing a node h times.
*	
*	For the insert operation, a height check can be done as the searching recurses
*	back up the tree using size= Max(left,right)+1
*	This should keep the running time about the same.
*
*	For the delete operation, a height check can be done from the deleted node.
*	By using size= Max(left,right)+1 on each ancestor in the tree from the deleted node,
*	The worst case for this additional operation is O(h).
*	So O(n) + O(h) = O(n)
**/