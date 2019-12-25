import java.util.*;
import java.io.*;

class horses{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int diff = Integer.MAX_VALUE;
		while(t-->0){
			int n = sc.nextInt();
			Vector<Integer> v1 = new Vector<Integer>(n);
			Vector<Integer> v2 = new Vector<Integer>(n);
			for(int i=0;i<n;++i){
				int elem = sc.nextInt();
				v1.add(elem);
			}
			Collections.sort(v1);
			for(int j=0;j<v1.size()-1;++j){
				diff = v1.get(j+1) - v1.get(j);
				v2.add(diff);
			}
			Object obj = Collections.min(v2);
			System.out.println(obj);
		}
	}
}
