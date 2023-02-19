#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int n,a[25],i,j,temp;
	
	cout<<"Enter Number of elements: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
			for(j=i+1;j<n;j++)
			{
				
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}

	}
	cout<<"Sorted Elements are:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	getch();

		
	
}
