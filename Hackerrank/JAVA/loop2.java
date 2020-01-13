import java.io.*;
import java.util.*;
import java.lang.Math.*;

class loop2{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int q = sc.nextInt();
        while(q-->0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int n = sc.nextInt();
            int res = a;
            for(int i=0;i<=n-1;++i){
                res += (int)((Math.pow(2,i))*b);
                System.out.print(res+" ");
            }
            System.out.print("\n");
        }
    }
}
