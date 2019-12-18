import java.util.Scanner;
class subsplay{
	public static int max(int a,int b){
		if(a>b){
			return a;
		}else{
			return b;
		}
	}
	public static void main(String[] args){
		int t,n,l=0;
		String s;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
		while(t-->0){
			n = sc.nextInt();
			s = sc.next();	
			for(int i=0;i<n;++i){
				l=n;
				for(int j=max(i-l,0);j<i;++j){
					if(s.charAt(i)==s.charAt(j) && (l>i-j)){
						l = i-j;
					}
				}
			}
			System.out.println(n-l);
		}
	}
}

