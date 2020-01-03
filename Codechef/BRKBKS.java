import java.io.*;
import java.util.*;

class BRKBKS{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
			int s = sc.nextInt();
			Vector<Integer> v = new Vector<Integer>(3);
			for(int i=0;i<3;++i){
				int elem = sc.nextInt();
				v.add(elem);
			}
			
			if(v.get(0)+v.get(1)+v.get(2)<=s){
				System.out.println("1");
			}else if(v.get(0)+v.get(1)<=s || v.get(1)+v.get(2)<=s){
				System.out.println(2);
			}else{
				System.out.println(3);
			}
		}
	}
}
