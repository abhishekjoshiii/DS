#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n,a[25],i,j,temp;
	
	cout<<"Enter no of elements: ";
	cin>>n;
	cout<<"Enter array elemets: ";
	
	for(i=0;i<n;i++){
		cin>>a[i];
		
	}
	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	cout<<"\nSorted Elements are: ";
	
	for(i=0;i<n;i++){
		
		cout<<a[i]<<"\t";
	}
	return 0;
}
