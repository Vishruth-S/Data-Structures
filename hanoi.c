/*This is a c program to implement tower of hanoi using stack.
The tower of hanoi is a game to move discs from one stick to other in decreasing order of size following certain rules.
The rules are:
-Only one move is permitted at a time.
-A disc can be moved from one disc to any other.
-Large disc cannot be placed over small one. 
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

//The function to push an element into a stack.
void push(int a[20],int top,int item){

	a[top]=item;
	
}
//The function to pop an element from a stack.
int pop(int a[20],int top){
	int item;
	item=a[top];
	
	return item;
}
//Function to display the stack.
void display(int a[20],int top){
	int i;
	for(i=top;i>=1;i--){
		printf("%d ",a[i]);
	}
}
//Main function
void main(){
	int a[20],b[20],c[20],a_top=0,size=10,check=0,i,n,b_top=0,c_top=0,item,limit;
	printf("\nEnter the number of elements:");
	scanf("%d",&n);
	//This code is suitable for 20 discs 
	if(n>=20){
		printf("\nThe number of discs have exceeded");
	}
	else{
		for(i=0;i<20;i++){
			a[i]=99;
			b[i]=99;
			c[i]=99;
		}
		for(i=n;i>=1;i--){
			a_top++;
			push(a,a_top,i);
		}
		
		limit=pow(2,n);
	
		for(i=1;i<=limit;i++){
			printf("\n\n");
			printf("\nStack number 1:\t");
			display(a,a_top);
			printf("\nStack number 2:\t");
			display(b,b_top);
			printf("\nStack number 3:\t");
			display(c,c_top);
			if(i%3==1){
				if(a[a_top]<c[c_top]){
					item=pop(a,a_top);
					a[a_top]=99;
					a_top--;
					c_top++;
					push(c,c_top,item);
				}
				else{
					item=pop(c,c_top);
					c[c_top]=99;
					c_top--;
					a_top++;
					push(a,a_top,item);				
				}
			}
			else if(i%3==2){
					if(a[a_top]<b[b_top]){
					item=pop(a,a_top);
					a[a_top]=99;
					a_top--;
					b_top++;
					push(b,b_top,item);
				}
				else{
					item=pop(b,b_top);
					b[b_top]=99;
					b_top--;
					a_top++;
					push(a,a_top,item);				
				}
			}
			else if(i%3==0){
				if(c[c_top]<b[b_top]){
					item=pop(c,c_top);
					c[c_top]=99;
					c_top--;
					b_top++;
					push(b,b_top,item);
				}
				else{
					item=pop(b,b_top);
					b[b_top]=99;
					b_top--;
					c_top++;
					push(c,c_top,item);
				}
			}
		}
		//End of while loop
	printf("\nThe total number of steps is %d",limit-1);
}

	getch();
}
