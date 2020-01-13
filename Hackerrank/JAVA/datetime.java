import java.util.*;
import java.time.*;
import java.text.SimpleDateFormat;
class datetime{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int day,month,year;
		day = sc.nextInt();
		month = sc.nextInt();
		year = sc.nextInt();
		try{
			String input = String.format("%s/%s/%s",day,month,year);
			Date iDate = new SimpleDateFormat("dd/MM/yyyy").parse(input);
			Calendar c = Calendar.getInstance();
			c.setTime(iDate);
			String dayOfWeek = c.getDisplayName(Calendar.DAY_OF_WEEK,Calendar.LONG,Locale.US).toUpperCase();
			System.out.println(dayOfWeek);
		}catch(Exception e){
			System.out.println(e);
		}
	}
}
