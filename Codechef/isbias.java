import java.io.*;
import java.util.*;
import java.lang.*;

class isbias{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int q = sc.nextInt();
		int cnt1=0,cnt2=0,lo=0,ro=0;
		Vector<Integer> v = new Vector<Integer>(n);
		for(int i=0;i<n;++i){
			int elem = sc.nextInt();
			v.add(elem);
		}
		
		while(q-->0){
			int l = sc.nextInt(); 	
			int r = sc.nextInt();
			lo = v.indexOf(l);
			ro = v.indexOf(r);
			for(int i=lo,j=i+1;i<=ro-1;++i,++j){
				if(v.get(i)>v.get(j)){
					//System.out.println(v.get(i)+" "+v.get(j));
					cnt1++;
				}
				
				if(v.get(i)<v.get(j)){
					cnt2++;
				}
			}
			if(cnt1==cnt2){
				System.out.println("YES");
			}else{
				System.out.println("NO");
			}
		}
	}
}
