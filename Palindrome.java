//Program to Check whether the entered word is a Palindrome or not.
import java.util.Scanner;
class Palindrome
{
	public static void main(String[] args)
	 {
		Scanner a=new Scanner(System.in);
		System.out.println("Enter word to be checked");
		String s=a.nextLine();
		int n=s.length();
		int j=n-1;
		int f=0;
		for(int i=0;i<n/2;i++)
		{
			if(s.charAt(i)!=s.charAt(j))
				f=1;
		}
if(f==0)
{
	System.out.println("The sentence is a palindrome");
}

else
{
	System.out.println("The sentence is not a palindrome");
}
	}
}