
import java.util.Scanner;
public class Count {
	public static void main(String args[])
	{
		
		Scanner s=new Scanner(System.in);
		char a=s.next().charAt(0);
		
		if((a>='A' && a<='Z') ||(a>='a' && a<='z'))
		{
				System.out.println("alphabet");
				
			
		}else if(a>0||a<0)
		{
			System.out.println("number");
		}
		else{
	System.out.print("not an alpha numeric");
	}
}
}
