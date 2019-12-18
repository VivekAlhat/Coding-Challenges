import java.util.*;

class day8{
	public static void main(String[] args){
		Map<String,String> adbook;
		adbook = new HashMap<String,String>();
		int n;
		String name,phone;
		Scanner sc=new Scanner(System.in);
		n = sc.nextInt();
		for(int i=0;i<n;++i){
			name = sc.next();
			phone = sc.next();
			adbook.put(name,phone);
		}
		while(sc.hasNext()){
			String query = sc.next();
			phone = adbook.get(query);
			System.out.println((phone!=null)? query+"="+phone:"Not found");
		}
	}
}
