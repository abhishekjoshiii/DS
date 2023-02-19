#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int i,n,j,a[25],temp,min;
	
	cout<<"Enter no of the elements:  ";
	cin>>n;
	cout<<"Enter the array elements:  ";
	for(i=0;i<n;i++)
	{
		
		cin>>a[i];
		
	}
	for(i=0;i<n;i++)
	{
		min=i;
		
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
 			{
 				min=j;
			} 

		}
			if(min!=1)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
		
	}
	cout<<"Sorted elements are:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
	
	
}
