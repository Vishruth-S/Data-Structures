//Program to check whether the given number is a perfect nummber
import java.util.Scanner;

public class Perfectno{
	public static void main(String[] args) {
		Scanner num=new Scanner(System.in);
		System.out.println("enter the number to be checked");
		int n=num.nextInt();
		int s=0,r;
		
		for(int i=1;i<=n/2;i++)
			{if(n%i==0)
				s=s+i;
			}	
			if(n==s)
				System.out.println(n+"is a perfect number");
			else
				System.out.println(n+"is not a perfect number");
	}
}