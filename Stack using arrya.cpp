#include<iostream>
#include<conio.h>

#define max 10

using namespace std;

int st[max];

int top=-1;

void push(int st[],int val);
void pop(int st[]);
void peep(int st[]);
void display(int st[]);


int stack[100],choice,n,x,i;

void push(void);
void pop(void);
void peep(void);

int main()
{
	top=-1;
	
	cout<<"Enter size of stack:";
	cin>>n;
	cout<<"\nStack operation: \n1.Push \n2.Pop \n3.Peep \n4.Exit";
	do
	{
		cout<<"\nEnter Your Choice";
		cin>>choice;
		switch(choice){
			case 1:push();
			break;
			case 2: pop();
			break;
			case 3:peep();
			break;
			case 4:cout<<"exit";
			break;
			default:cout<<"Wrong choice";
			break;
		}
		
		
	}
	while(choice!=4);
	return 0;
}


void push()
{
	if(top==max-1){
		cout<<"\nStack is overflow";
	}
	else
	{
		cout<<"Enter the element to insert:";
		cin>>x;
		top++;
		stack[top]=x;
	}
}

void pop()
{
	if(top<=-1)
	{
		cout<<"\nStack is underflow";
	}
	else
	{
		cout<<"\nPopped element is: "<<stack[top];
		top--;
	}
}
void peep()
{
	if(top>=0)
	{
		cout<<"Elements in the stack are: ";
		for(i=0;i<=top;i++)
		{
			cout<<stack[i]<<" ";
			
		}
	}
	else
	{
		cout<<"Stack is Empty";
	}
}
