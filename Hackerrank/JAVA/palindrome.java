/*
Given a string s, print Yes if it is a palindrome, print No otherwise.
*/

import java.util.*;

class palindrome{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		String ref = "";
		boolean flag = false;
		for(int i = s.length()-1;i>=0;--i){
			ref += s.charAt(i);
		}
		for(int j=0;j<s.length();++j){
			if(ref.charAt(j) == s.charAt(j)){
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
	}
}
