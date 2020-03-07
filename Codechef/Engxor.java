import java.lang.*;
import java.util.*;
import java.io.*;

class Engxor {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int even = 0, odd = 0;
		while(t-->0){
			long n = sc.nextLong();
			long q = sc.nextLong();
			Vector <Integer> vec = new Vector <Integer> ();
			Vector <Integer> que = new Vector <Integer> ();
			Vector <Integer> res = new Vector <Integer> ();
			Vector <String> binRes = new Vector <String> ();
			for(int i=0;i<n;++i){
				int elem = sc.nextInt();
				vec.add(elem);
			}
			
			for(int i=0;i<q;++i){
				int query = sc.nextInt();
				que.add(query);
			}
			
			for(int i=0;i<vec.size();++i){
				for(int j=0;j<que.size();++j){
					int ans = que.get(j) ^ vec.get(i);
					res.add(ans);
				}
			}
			
			for(int j=0;j<res.size();++j){
				String bin = Integer.toBinaryString(res.get(j));
				binRes.add(bin);
				int count = countOnes(binRes.get(j));
				if(count%2==0){
					even += 1;
				}else{
					odd += 1;
				}
			}
						
			System.out.println(even+" "+odd);
		}
	}
	
	public static int countOnes(String s){
		int cnt = 0;
		char ch;
		for(int i=0;i<s.length();++i){
			ch = s.charAt(i);
			if(ch=='1'){
				cnt++;
			}
		}
		return cnt;
	}
}
