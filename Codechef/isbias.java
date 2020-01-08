import java.io.*;
import java.lang.*;
import java.util.*;
class isbias{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		long n,q;
		n = sc.nextLong();
		q = sc.nextLong();
		long[] arr = new long[(int)n+1];
		for(int i=0;i<n;++i){
			arr[i] = sc.nextInt();
		}
		
		for(int j=0;j<q;++j){
			int cnt1=0,cnt2=0;
			int l = sc.nextInt();
			int r = sc.nextInt();
			for(int k=l;k<r;++k){
				if(arr[k]>arr[k-1]){
					cnt1++;
				}else{
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
