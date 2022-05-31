
/**
 * 
 * Name : Kevin Shen
 * Login: kshen94
 * Student #: 212298535
 * 
 */

public class Question1 {
	public shuffle(Node e){
		Node p1,next1, p2,next2;
		p1 = head;			//p1 is 1st element of the 1st list
		p2 = p1;			
		next1 = head.next;	// next1 is next node of p1
		for(int x =0; x< length/2;x++){ // find the half way point of the list
			p2 = p2.next;
		}
		next2 = p2.next;	//split the list into 2
		p2.next = null;
		
		while(p1 != null){
			p1.next = next2;	//insert next2 after p1
			p1 = p1.next;		//move p1 to next element
			next2= next2.next;	//increment next2 in the list
			p1.next = next1;	//insert next1 after p1
			next1 = next1.next;	//move p1 to next element
			p1 = p1.next;		//increment next1 in the list
		}						//repeat until all elements are inserted
	}
}

	/**
	Searching for the midway point of the linked list is T(n/2)
	and the shuffle is T(n) because of accessing every element once.
	T(n/2) + T(n) = O(n)
	**/