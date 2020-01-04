import java.io.*;
import java.util.*;

class dynamo{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
			int s=1;
			int n = sc.nextInt();
			int a = sc.nextInt();
			for(int i=a;i<n;++i){
				s *= 10;
			}
			System.out.println(a+2*s);
			int b = sc.nextInt();
			System.out.println(s-b);
			int d = sc.nextInt();
			System.out.println(s-d);
			int ss = sc.nextInt();
		}
	}
}
