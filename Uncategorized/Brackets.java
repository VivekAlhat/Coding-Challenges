/*
	Check whether an expression is balanced or not
*/
import java.util.*;
class Brackets {
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		String exp = in.next();
		Map <Character, Integer> ref = new HashMap <> ();
		int flag = 0;
		for(int i=0;i<exp.length();++i){
			if(ref.containsKey(exp.charAt(i))){
				ref.put(exp.charAt(i), ref.get((exp.charAt(i))+1));
			}else{
				ref.put(exp.charAt(i), 1);
			}
		}
		
		for(int j=0;j<ref.size();++j){
			if((ref.get('(') ==  ref.get(')')) && (ref.get('{') ==  ref.get('}')) && (ref.get('[') ==  ref.get(']'))){
				flag = 1;
				//System.out.println("True");
			}else{
				flag = 0;
				//System.out.println("False");
			}
		}
		
		if(flag == 1){
			System.out.println("True");
		}else{
			System.out.println("False");
		}
		//System.out.println(ref.get('('));
				
		//System.out.println(Arrays.asList(ref.keySet().toArray()));
	}
}
