/*
Input Format

Every line of input will contain a String followed by an integer.
Each String will have a maximum of  alphabetic characters, and each integer will be in the inclusive range from  to .

Output Format

In each line of output there should be two columns:
The first column contains the String and is left justified using exactly  characters.
The second column contains the integer, expressed in exactly  digits; if the original input has less than three digits, you must pad your output's leading digits with zeroes.
*/

import java.util.*;

class formatting{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("================================");
		for(int i=0;i<3;++i){
			String s = sc.next(); // To avoid input mismatch exception because nextline reads entire line and hence int causes exception
			int num = sc.nextInt();
			System.out.println("%-15s%03d\n",s,num);
		}
		System.out.println("================================");
	}
}
