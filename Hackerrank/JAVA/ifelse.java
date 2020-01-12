/*
	Given an integer,n, perform the following conditional actions:
	If n is odd, print Weird
	If n is even and in the inclusive range of  to , print Not Weird
	If n is even and in the inclusive range of  to , print Weird
	If n is even and greater than , print Not Weird
*/

import java.util.*;

class ifelse{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		if(n%2!=0){
			System.out.println("Weird");
		}else if(n%2==0 && n>=2&&n<=5){
			System.out.println("Not Weird");
		}else if(n%2==0 && n>=6&&n<=20){
			System.out.println("Weird");
		}else if(n%2==0 && n>20){
			System.out.println("Not Weird");
		}
	}
}
