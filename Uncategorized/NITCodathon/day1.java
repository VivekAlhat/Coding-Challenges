import java.util.*;

class day1{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int cnt = 0;
		int n = sc.nextInt();
		long k = sc.nextLong();
		int[] ar = new int[n];
		for(int i=0;i<n;++i){
			ar[i] = sc.nextInt();
		}
		
		for(int j=0;j<n;++j){
			if(ar[j]<k){
				cnt++;
			}
		}
		System.out.println(cnt);
	}
}
