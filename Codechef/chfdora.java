/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
			int cnt=0;
			int n = sc.nextInt();
			int m = sc.nextInt();
			int[][] arr = getArray(n,m);
			
			for(int i=0;i<arr.length;++i){
				for(int j=0;j<arr[i].length;++j){
					int ptr = 1;
					while(((i-ptr>=0)&&(j-ptr>=0)&&(i+ptr<n)&&(j+ptr<m))&&arr[i+ptr][j]==arr[i-ptr][j]&&arr[i][j+ptr]==arr[i][j-ptr]){
						ptr++;
					}
						cnt += ptr;	
				}
			}
			System.out.println(cnt);
		}
		sc.close();
	}
	
	public static int[][] getArray(int k,int l) {
        	Scanner sc = new Scanner(System.in);
        	int[][] ar = new int[k][l];
        	for (int i = 0; i < ar.length; ++i){
            		for (int j = 0; j < ar[i].length; ++j){
                		while(sc.hasNextInt()){
                		    ar[i][j] = sc.nextInt();
                	    }
                	}
                }
        	sc.close();
        	return ar;
    	}
}

