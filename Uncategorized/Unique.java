/*
	Find non-repeating numbers from a given array
*/

import java.util.*;

class Unique{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		long startTime = System.currentTimeMillis();
		int size = in.nextInt();
		int[] arr = new int[size];
		Map <Integer, Integer> count = new HashMap<> ();
		for(int i=0;i<size;++i){
			arr[i] = in.nextInt();
		}
		
		for(int j=0;j<size;++j){
			if(count.containsKey(arr[j])){
				count.put(arr[j], count.get(arr[j])+1);
			}else{
				count.put(arr[j], 1);
			}
		}
		
		for(int k=0;k<size;++k){
			if(count.get(arr[k])==1){
				System.out.print(arr[k]+" ");
			}
		}
		
		long endTime = System.currentTimeMillis();
		System.out.println("\nProgram executed in " + (endTime-startTime) + " ms.");
	}
}
