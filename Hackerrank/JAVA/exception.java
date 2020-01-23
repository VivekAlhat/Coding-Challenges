import java.io.*;
import java.util.*;

public class exception {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        try{
            int x,y;
            Scanner sc = new Scanner(System.in);
            x = sc.nextInt();
            y = sc.nextInt();
            int res = x/y;
            System.out.println(res);
        }catch(InputMismatchException i){
            System.out.println("java.util.InputMismatchException");
        }catch(Exception e){
            System.out.println(e);
        }
    }
}


