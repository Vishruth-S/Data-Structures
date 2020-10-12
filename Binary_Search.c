
//Program to perform Binary Search Operation on Given Numbers.

#include <stdio.h>

int main()
{
    int a[10],high,low,search,mid,n,swap,i,j;
	printf("Enter the total number of elements to be taken to perform Binary Search.\n");
	scanf("%d",&n);
	printf("Enter the elements.\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-  01-i;j++)
		{
		if(a[j]>a[j+1])
		    {
			    swap=a[j];
			    a[j]=a[j+1];
			    a[j+1]=swap;	
		    }
		}
	}
	printf("Elements after sorting are as follows.\n");
	for(i=0;i<n;i++)
	{
	    printf("%d\t",a[i]);
	}
	printf("\nEnter the element to be search: ");
	scanf("%d",&search);
	low=0;
	high=n-1;
	for(i=0;i<n;i++)
	{
		mid=(low+high)/2;
		if(a[mid]==search)
		{
			printf("\n%d is found at %d location.\n",search,mid);
			break;
		}
		if(search<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	if(low > high)
        printf("%d isn't present in the given numbers.", search);

    return 0;
}