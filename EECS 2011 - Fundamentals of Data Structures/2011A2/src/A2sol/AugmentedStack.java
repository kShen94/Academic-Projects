package A2sol;
/**
 * 
 * Name : Kevin Shen
 * Login: kshen94
 * Student #: 212298535
 * 
 */

import java.util.ArrayList;
import java.util.List;

public class AugmentedStack<E extends Comparable<E>> {
	
	private E minValue;
	private int numOfItems;
	private List<E> stack;
	private List<E> minStack;
	
	public AugmentedStack(){
		numOfItems = 0;
		stack = new ArrayList<E>();
		minStack = new ArrayList<E>();
	}
	
	public void push(E x,AugmentedStack<E> S){
		if(S.numOfItems == 0){
			S.numOfItems = 1;
			S.stack.add(x);
			S.minValue = x;
			S.minStack.add(x);
		}
		else{
			if(x.compareTo(S.minValue) < 0){
				S.minValue = x;
				S.minStack.add(0,x);
			}
			S.stack.add(0,x);
			numOfItems++;
		}
	}
	
	public E pop(AugmentedStack<E> S){
		E remove;
		if(S.stack == null)
			return null;
		else{
			remove = S.stack.remove(0);
			if(remove.equals(S.minValue)){
				S.minStack.remove(0);
				if(S.minStack.isEmpty())
					S.minValue = null;
				else
				S.minValue = S.minStack.get(0);
			}
			numOfItems--;
			return remove;
		}
	}
	
	public E getMin(AugmentedStack<E> S){
		return S.minValue;
	}
	
	public boolean isEmpty(AugmentedStack<E> S){
		if(S.numOfItems == 0)
			return true;
		else
			return false;
	}
	
	public E top(AugmentedStack<E> S){
		E item = S.minStack.get(0);
		return item;
	}
	
	public static void main(String[] args) {
		
		AugmentedStack<Integer> s = new AugmentedStack<Integer>();
		s.push(12, s);
		s.push(13, s);
		s.push(1, s);
		s.pop(s);
		System.out.println(s.getMin(s));
		
		// TODO Auto-generated method stub

	}

}
