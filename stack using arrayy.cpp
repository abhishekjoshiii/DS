#include<iostream>
#define MAX 10
using namespace std;

int st[MAX],top=-1;
void Push(int st[], int val);
void Pop(int st[]);
void Peep(int st[]);
void display(int st[]);

int stack[100],choice,n,x,i;
void Push(void);
void Pop(void);
void Peep(void);

int main()
{
	
	top=-1;
	cout<<"Enter size of stack: "<<endl;
	cin>>n;
	cout<<"Stack Operation: "<<endl;
	cout<<" \n 1.PUSH \n 2.POP  \n 3.PEEP \n 4.EXIT"<<endl;
	do
	{
		cout<<endl<<"Enter your choice: ";
		cin>>choice;

	switch (choice)
	{
		case 1: Push();
		break;
		case 2: Pop();
		break;
		case 3: Peep();
		break;
		case 4:cout<<" exit()";
		break;
		default:
		{
		cout<<"Wrong choice!!";
		}
	}
       }while (choice !=4);
	return 0;
}
void Push()
{
	if(top==MAX-1)
	{
		cout<<"Stack is overflow"<<endl;
	}
	else
	{
	cout<<"Enter the elements to insert: "<<endl;
	cin>>x;
	top++;
	stack[top]=x;
	}
}
void Pop()
{
	if(top<=-1)
	{
		cout<<"Stack is underflow"<<endl;
	}
	else
	{
		cout<<"Popped element is: "<<stack[top]<<endl;
		top--;
	}
}
void Peep()
{
	if(top>=0)
	{
		cout<<"Elements in Stack are: "<<endl;
		for(i=0;i<=top;i++)
		{
		cout<< stack[i]<<" ";
		}
	}
	else
	{
		cout<<"Stack is empty"<<endl;
	}
}
