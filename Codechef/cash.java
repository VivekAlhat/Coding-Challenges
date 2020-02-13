import java.util.*;

class cash {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		long t = sc.nextLong();
		while(t-->0){
			int sum = 0;
			int n = sc.nextInt();
			int k = sc.nextInt();
			int[] arr = new int[n];
			for(int i=0;i<n;++i){
				arr[i] = sc.nextInt();
				sum = sum + (arr[i]%k);
			}
			while(sum>=k){
				sum = sum - k;
			}
			System.out.println(sum);
		}
	}
}
