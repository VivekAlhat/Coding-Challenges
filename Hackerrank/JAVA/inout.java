import java.util.*;

class inout{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int first = sc.nextInt();
		double second = sc.nextDouble();
		sc.nextLine(); // Since previous data is in a buffer, we need to clear it out to read a complete line
		String third = sc.nextLine();
		System.out.println("String: "+ third);
		System.out.println("Double: "+ second);
		System.out.println("Int: "+ first);
	}
}
