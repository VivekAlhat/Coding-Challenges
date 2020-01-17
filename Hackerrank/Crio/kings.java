import java.util.*;

class kings{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		Vector<String> v = new Vector<String>(n);
		String A = sc.next();
		String B = sc.next();
		int k = sc.nextInt();
		String name = null;
		v.add(A);
		v.add(B);
		for(int i=0,j=2;i<n;++i,++j){
			name = v.get(i) + stringMultiply(v.get(j-1),2);
			v.add(name);
		}
		
		String res = v.get(n-1);
		int l = res.length();
		//System.out.println(res);
		if(l<k){
			System.out.println("-1");
		}else{
			System.out.println(res.charAt(k-1));
		}
	}
	
	public static String stringMultiply(String s, int n){
    		StringBuilder sb = new StringBuilder();
		for(int i = 0; i < n; i++){
        		sb.append(s);
    		}
    	return sb.toString();
	}
}
