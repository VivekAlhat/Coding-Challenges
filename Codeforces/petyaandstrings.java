import java.util.Scanner;

public class petyaandstrings  {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String first = in.nextLine().toLowerCase();
		String second = in.nextLine().toLowerCase();
		int value = 0;
		for (int i = 0; i < first.length(); i++)
			if (first.charAt(i) == second.charAt(i))
				continue;
			else if (first.charAt(i) < second.charAt(i)) {
				value = -1;
				break;
			} else {
				value = 1;
				break;
			}
		System.out.println(value);
		in.close();

	}

}
