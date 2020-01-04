import java.util.*;
import java.io.*;
import java.lang.*;
class isbias{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int q = sc.nextInt();
		int cnt1=0,cnt2=0;
		int[] arr = new int[n];
		for(int i=0;i<n;++i){
			int elem = sc.nextInt();
			arr[i] = elem;
		}
		while(q-->0){
			int l = sc.nextInt();
			int r = sc.nextInt();
			int lo = getArrayIndex(arr,l);
			int ro = getArrayIndex(arr,r);
			for(int i=lo;i<=ro;++i){
				if(arr[i]>arr[i+1]){
					cnt1++;
				}else{
					cnt2++;
				}
			}
		}
		if(cnt1==cnt2){
			System.out.println("YES");
		}else{
			System.out.println("NO");
		}
	}
	
	public static int getArrayIndex(int[] arr,int value) {
		int k=0;
	        for(int i=0;i<arr.length;i++){
            		if(arr[i]==value){
                		k=i;
                		break;
            		}
        	}
    		return k;
	}
}
