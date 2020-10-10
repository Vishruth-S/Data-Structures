//Program to find the frequency of a given character in a string.
import java.util.Scanner;
class Freq{
	public static void main(String[] args) {
		int i,count=0;
		Scanner a=new Scanner(System.in);
		System.out.println("Enter the String");
		String s=a.nextLine();
		System.out.println("enter character whose frequency is to be found");
		char ch=a.next().charAt(0);
		int n=s.length();
		for(i=0;i<n;i++)
		{
			if(ch==s.charAt(i))
			{
				count++;
			}
		}
		System.out.println("The frequency of "+ch+" is"+count);

	}
}