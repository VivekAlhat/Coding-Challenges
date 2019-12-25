import java.io.*;
import java.util.*;

class johny{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int t  = sc.nextInt();
		while(t-->0){
			int n = sc.nextInt();
			Vector<Integer> v = new Vector<Integer>(n);
			for(int i=0;i<n;++i){
				int elem = sc.nextInt();
				v.add(elem);
			}
			int k = sc.nextInt();
			int item = v.get(k-1);
			Collections.sort(v);
			System.out.println(v.indexOf(item)+1);
		}
	}
}
