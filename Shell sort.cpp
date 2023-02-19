#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n,i,j,a[20],temp,k;
	
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"Enter array Elements: ";
	for(i=0;i<n;i++){
		
		cin>>a[i];
		
	}
	
	for(i=n/2;i>0;i=i/2)
	{
		for(j=i;j<n;j++)
		{
		
		for(k=j-1;k>=0;k=k-i)
		{
			if(a[k+i]>a[k])
			break;
			else
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
}
cout<<"Sorted elements are: ";
for(i=0;i<n;i++){
	cout<<a[i]<<"\t";
}
return 0;
	
}
