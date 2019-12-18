import java.util.Scanner;
class watscore{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
			int n = sc.nextInt();
			int []arr = new int[8];
			for(int i=0;i<n;++i){
				int p = sc.nextInt();
				int s = sc.nextInt();
				p-=1;
				if(p<8){
					if(arr[p]<s){
						arr[p]=s;
					}
				}
			}
			int fscore=0;
			for(int i=0;i<8;++i){
				fscore=fscore+arr[i];
			}
			System.out.println(fscore);
		}
	}
}
