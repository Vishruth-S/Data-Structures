#include <iostream>
using namespace std;

int a[200];
int top=-1;

void push();
void pop();
void display();

int main()
{
	int ch;
	do{
		cout<<"\nSELECT Option\n";
		cout<<"\n1.Push";
		cout<<"\n2.Pop";
		cout<<"\n3.Display";
		cout<<"\n4.Exit\n\n";
		cin>>ch;
		switch(ch)
		{
			case 1:push();
				   break;
			case 2:pop();
				   break;
			case 3:display();
				   break;
		}
	}while(ch<4);
	return 0;
}

void push()
{
	int max=200;
	if(top==max-1)
		cout<<"\nOVERFLOW";
	else{
		top++;
		cout<<"\nENTER ELEMENT\n";
		cin>>a[top];
	}
}

void pop()
{
	int max=200;
	if(top==-1)
		cout<<"\nUNDERFLOW";
	else
	{
		cout<<"\nDELETED  "<<a[top];
		top--;
	}
}

void display()
{
	if(top==-1)
		cout<<"\nUNDERFLOW";
	else{
		for(int i=0;i<=top;i++)
			cout<<a[i]<<"  ";
	}
}