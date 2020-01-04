import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
import java.lang.*;

class Solution {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String emailRegEx = ".+@gmail\\.com$";
        	Pattern pattern = Pattern.compile(emailRegEx);
        	List<String> list = new ArrayList();
        	for(int i = 0; i < n; ++i){
        	    String name = sc.next();
        	    String email = sc.next();
        	    Matcher matcher = pattern.matcher(email);
        	    if (matcher.find()){
        	        list.add(name);
        	    }
        	}
        	Collections.sort(list);
        	for (String name : list){
        	    System.out.println(name);
        	}
	}
}

