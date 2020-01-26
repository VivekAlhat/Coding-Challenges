import java.util.*;

public class helpfulmaths{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		char[] arr = s.toCharArray();
		String n = s.replaceAll("[^0-9]","");
		char[] numArr = n.toCharArray();
		Arrays.sort(numArr);
		for(int i=0;i<numArr.length-1;++i){
			System.out.print(numArr[i]+"+"); // remove last digit and extra plus sign
		}
		System.out.print(numArr[numArr.length-1]+"\n"); // add last digit
	}
}
