/*
Given a string, s, and an integer, k, complete the function so that it finds the lexicographically smallest and largest substrings of length k.
*/

import java.util.*;

class strcomp{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		int k = sc.nextInt();
		Vector<String> v = new Vector<String>();
		Vector<String> ss = new Vector<String>();
		for(int i=0;i<s.length();++i){
			for(int j=i+1;j<=s.length();++j){
				v.add(s.substring(i,j));
			}
		}

		for(int i=0;i<v.size()-1;++i){
			if((v.get(i).length())==k){
				ss.add(v.get(i));
			}
		}
		//System.out.println(ss);
		Collections.sort(ss);
		System.out.println(ss.get(0)+"\n"+ss.get(ss.size()-1));
	}
}
