/**
 * Name: Kevin Shen
 * EECS Account: kshen94
 * Student ID: 212298535
 */

public class Question3 {
	
	public int question3(int[] S, int k){
		int maxVotes;
		int maxIndex;
		int[] votes = new int[k];			
		for(int vote: S){					//counts votes similar to bucket sort
			votes[vote-1]++;				//instead of sorting votes in buckets, it increments a counter in an array
		}
		for(int v: votes){					//goes through buckets to find the largest amount of votes
			compare each v;					
			maxVotes and maxIndex record largest amount of votes;
		}
	}
	return maxIndex+1;
}

/**
 * Using something similar to bucket sort, it takes O(n) to obtain all the votes.
 * Then searching for the largest amount of votes take O(k).
 * O(n) + O(k) = O(n+k).
 */