import java.io.*;
import java.util.*;

class dynamo{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
			long s=1;
			long n = sc.nextLong();
			long a = sc.nextLong();
			for(int i=0;i<n;++i){
				s *= 10;
			}
			System.out.println(a+2*s);
			System.out.flush();
			long b = sc.nextLong();
			System.out.println(s-b);
			System.out.flush();
			long d = sc.nextLong();
			System.out.println(s-d);
			System.out.flush();
			long ss = sc.nextLong();
		}
	}
}
