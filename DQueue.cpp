#include<iostream>
using namespace std;

#define SIZE 5
class dequeue
{
	int a[10],front,rear;
	public:
			dequeue();
			void add_at_beg(int);
			void add_at_end(int);
			void delete_fr_front();
			void delete_fr_rear();
			void display();
			
};
dequeue::dequeue()
{
	front=-1;
	rear=-1;
	
}
void dequeue::add_at_end(int item)
{
	if(rear>=SIZE-1)
	{
		cout<<"\nInsertion is not possible, Overflow";
		
	}
	else
	{
		if(front==-1)
		{
			front++;
			rear++;
		}
		else{
			rear=rear+1;
		}
		a[rear]=item;
		cout<<"\nInserted item is"<<a[rear];
		
	}
}
void dequeue::add_at_beg(int item)
{
	if (front==-1)
	{
		front=0;
		a[++rear]=item;
		cout<<"\nInserted element is"<<item;
		
	}
	else if(front!=0)
	{
		
		a[--rear]=item;
		cout<<"\nInserted element is"<<item;
		
	}
	else{
		
	cout<<"\nInsertion is not possible,overflow"<<item;
	}
}
void dequeue::display()
{
	if(front==-1)
	{
		cout<<"Dequeue is empty";
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<a[i]<<"";
		}
	}
}
void dequeue::delete_fr_front()
{
	if(front==-1)
	{
		cout<<"deletion is not possible::dequeue is empty";
		return;
	}
	else
	{
		cout<<"the delete element is"<<a[rear];
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		
			rear=rear-1;
	}
}
void dequeue::delete_fr_rear()
{
if(front==-1)
{
cout<<"deletion is not possible::dequeue is empty";
return;
}
else
{

cout<<"the deleted element is"<<a[rear];
if(front==rear)
{
front=rear=-1;
}
else
rear=rear-1;
}
}
int main()
{
	int c,item;
	dequeue d1;
	do
	{
		cout<<"\nDEQUEUE OPERATION";
		cout<<"\n1.Insert at beginning";
		cout<<"\n2.Insert at end";
		cout<<"\n3.Display";
		cout<<"\n4.Deletion from front";
		cout<<"\n5.Deletion from rear";
		cout<<"\n6.Exit";
		cout<<"\nEnter Your Choice: ";
		cin>>c;
		switch(c)
		{
			case 1:cout<<"Enter The Element To Insert: ";
			cin>>item;
			d1.add_at_beg(item);
			break;
			case 2:cout<<"Enter The Element To Insert: ";
			cin>>item;
			d1.add_at_end(item);
			break;
			case 3:d1.display();
			break;
			case 4:d1.delete_fr_front();
			break;
			case 5:d1.delete_fr_rear();
			break;
			case 6:exit(1);
			break;
			csdefualt:cout<<"Invalid Choice!!";
			break;
		}
	}
	while(c!=7);
}
