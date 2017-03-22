import java.util.Scanner;
public class Count {
	public static void main(String args[])
	{
		
		Scanner s=new Scanner(System.in);
		int a=s.nextInt();
		
		if(a%4==0)
		{
				System.out.println("leap year");
				
			
		}
		else{
	System.out.println("not a leap year");
	}
}
}