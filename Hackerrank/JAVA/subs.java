/*
Given a string,s, and two indices, start and end, print a substring consisting of all characters in the inclusive range from  start to end-1. You'll find the String class' substring method helpful in completing this challenge.
*/

import java.util.*;

class subs{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		int start = sc.nextInt();
		int end = sc.nextInt();
		System.out.println(s.substring(start,end));
	}
}
