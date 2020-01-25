import java.util.*;

public class football{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String s1 = sc.next();
		System.out.println(((s1.contains("1111111")||s1.contains("0000000")))?"YES":"NO");
	}
}
