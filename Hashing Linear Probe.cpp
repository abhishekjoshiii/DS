#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

#define max 10

class Hash
{
	private:
		int a[max];
	public:
		Hash();
		int create(int);
		void linear_prob(int,int);
		void display();
};

Hash::Hash()
{
	int i,j;
	for(i=0;i<max;i++)
	{
		a[j]=1;
	}
	
}

int Hash::create(int num)
{
	int key;
	key=num%10;
	return key;
}

void Hash::linear_prob(int key,int num)
{
	int flag,i,count=0;
	flag=0;
	if(a[key]==1)
	{
		a[key]=num;
	}
	else
	{
		i=0;
		while(i<max)
		{
			if(a[i]!=1)
			count++;
			i++;
		}
		if(count==max)
		{
			cout<<"\n Hash Table is Full"<<num<<"cannot be inserted";
			display();
			getch();
			exit(1);
		}
		for(i=key+1;i<max;i++)
		{
			a[i]=num;
			flag=1;
			break;
		}
		
		for(i=0;i<key && flag==00;i++)
			if(a[i]==-1)
			{
				a[i]=num;
				flag=1;
				break;
				
			}
	}
	
}

void Hash::display()
{
	int i;
	cout<<"\n the Hash table is"<<endl;
	for(i=0;i<max;i++)
	{
		cout<<"\n"<<i<<" "<<a[i];
	}
}

int main()
{
	int num,key;
	char ans;
	Hash h;
	cout<<"\n Collision Handling By Linear Probbing";
	do
	{
		cout<<"\nEnter the number";
		cin>>num;
		key=h.create(num);
		h.linear_prob(key,num);
		cout<<"\nDo you wish to continue?(yes/no)";
			ans=getch();
			
	}
	while(ans=='y');
	h.display();
	getch();
	
}
