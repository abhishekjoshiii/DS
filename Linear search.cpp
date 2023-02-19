#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n,a[20],i,k,index;
	
	cout<<"Enter no of Elements: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter element to be searched: ";
	cin>>k;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			index=i;
			break;
		}
		
	}
	if(a[i]==k)
	{
		cout<<"The element is form at index "<<index;
	}
	else
	{
		cout<<"The element not found..";
	}
	return 0;
}
