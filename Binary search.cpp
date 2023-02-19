#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
		int n,i,a[25],k,low,high;
		float mid;
		
		cout<<"Enter No of elements: ";
		cin>>n;
		cout<<"Enter an array elements: ";
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		low=0;
		high=n-1;
		mid=(low+high)/2;
		
		cout<<"Enter element to be search: ";
		cin>>k;
		while(low<=high)
		{
			if(a[mid]<k)
			low=mid+1;
			else
			if(a[mid]==k)
			low=mid+1;
			else
			if(a[mid]==k)
			{	
				cout<<"Element found at index"<<mid;
				break;
			}
			else
			high=mid-1;
			
			mid=(low+high)/2;
		}
		if(low>high)
		{
			cout<<"Element not found";
		}
	return 0;
	
		
		
		
}
