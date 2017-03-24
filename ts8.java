import java.util.Scanner;
public class guvi {
	public static  void main(String args[]){
		Scanner n=new Scanner(System.in);
		int s=n.nextInt();
		int t=0;
		//t=(s*(s+1)/2);
		for(int i=0;i<s;i++)
		
		{
			int k=n.nextInt();
			t=t+k;
		//	System.out.println(+t);
		}
		System.out.println(+t);
	}

}