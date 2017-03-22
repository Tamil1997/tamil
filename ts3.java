import java.util.Scanner;
public class Count {
	public static void main(String args[])
	{
		int count=0,b;
		Scanner s=new Scanner(System.in);
		int a=s.nextInt();
		
		while(a!=0)
		{
				b=a%10;
				count++;
				a=a/10;
		}
	System.out.print("\n"+count);
	}
}