/*
Given two strings of lowercase English letters, a and b, perform the following operations:

Sum the lengths of a and b.
Determine if a is lexicographically larger than b (i.e.: does b come before a in the dictionary?).
Capitalize the first letter in a and b and print them on a single line, separated by a space.
*/

import java.util.*;

class stringintro{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		char[] arr = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
		String a = sc.next();
		String b = sc.next();
		a = a.toLowerCase();
		b = b.toLowerCase();
		int lena = a.length();
		int lenb = b.length();
		System.out.println(lena+lenb);
		boolean flag = false;
		for(int i=0;i<=26;++i){
			if(a.charAt(0)>b.charAt(0)){
				flag = true;
			}else{
				flag = false;
			}
		}
		
		if(flag==true){
			System.out.println("Yes");
		}else{
			System.out.println("No");
		}
		
		String aa = a.substring(0,1).toUpperCase()+a.substring(1).toLowerCase(); 
		String bb = b.substring(0,1).toUpperCase()+b.substring(1).toLowerCase();
		System.out.println(aa+" "+bb);
	}
}
