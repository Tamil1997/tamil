import java.util.Scanner;
public class Count {
	public static void main(String args[])
	{
		
		Scanner s=new Scanner(System.in);
		int a=s.nextInt();
		
		if(a>0)
		{
				System.out.println("positive");
				
			
		}else if(a<0)
		{
			System.out.println("negative");
		}
		else{
	System.out.print("zero");
	}
}
}