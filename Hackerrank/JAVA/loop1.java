/*
Given an integer,n, print its first 10 multiples. Each multiple n*i (where 1<=i<=10) should be printed on a new line in the form: N x i = result.
*/

import java.util.*;

class loop1{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		for(int i=1;i<=10;++i){
			System.out.println(n+" x "+i+" = "+n*i);
		}
	}
}
