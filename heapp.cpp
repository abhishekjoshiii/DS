#include <iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class BinaryMinHeap
{	
public:
    int *data;
    int heapsize;
    int arraysize;
    BinaryMinHeap(int size)
    {    
		data=new int[size];
        heapsize=0;
        arraysize=size;
    }
   	int getLeftChildIndex(int node);
    int getRightChildIndex(int node);
    int getParentChildIndex(int node);
    void display();
    void insert();
    void reheapUp(int node);
    void remove();
    void reheapDown(int node);
    int getMin();
};
		int BinaryMinHeap::getLeftChildIndex(int node)
{   	return((2*node)+1);
}
		int BinaryMinHeap::getRightChildIndex(int node)
{   	return((2*node)+2);
}
		int BinaryMinHeap::getParentChildIndex(int node)
{   	return((node-1)/2);
}

void BinaryMinHeap::display()
{	for(int i=0;i<heapsize;i++)
     	{    	
		 cout<<endl<<data[i]<<" ";
 	}
}
void BinaryMinHeap::insert()
{	int val;
     	cout<<"Enter Element To Be Inserted: ";
     	cin>>val;
     	if(heapsize==arraysize)
     	{     	
		 cout<<"Heap Full\t"; 
     	}
     	else 
     	{    	data[heapsize]=val;
          		reheapUp(heapsize);
          		heapsize++;
     	}
}
void BinaryMinHeap::reheapUp(int node)
{   int parentIndex=getParentChildIndex(node);
    if(node!=0)
    {          	
		if(data[parentIndex]>data[node])
        {    	
			int temp=data[parentIndex];
            data[parentIndex]=data[node];
            data[node]=temp;
            reheapUp(parentIndex);
        }
    }
}
void BinaryMinHeap::remove()
{    	if(heapsize==0)
     	{    	
		 	cout<<"\nEmpty Heap!!";
     	}
     	else
     	{   	
			cout<<"\n\nDeleting!!"<<data[0];
        	data[0]=data[heapsize-1];
        	reheapDown(0);
        	heapsize--;
     	}
}
void BinaryMinHeap::reheapDown(int node)
{    	int tempIndex;
     	int Left=getLeftChildIndex(node);
     	int Right=getRightChildIndex(node);
   	if(Right>=heapsize)
     	{     	
			if(Left>=heapsize)
        	return;
        	else tempIndex=Left;
     	}
     	else 
     	{    	
		 		if(data[Left]<data[Right])
               	{   
				   	tempIndex=Left;
               	}
           		else   tempIndex=Right;           
     	}
     	if(data[tempIndex]<data[node])
     	{    
		 		int temp=data[tempIndex];
          		data[tempIndex]=data[node];
          		data[node]=temp;
          		reheapDown(tempIndex);
     	}
}
int BinaryMinHeap::getMin()
{   	if(heapsize==0)
    	{  	
			cout<<"Empty Heap";
    	}
    	else
		 	cout<<"\nMin Heap : "<<data[0];
}
int main()
{  	
		BinaryMinHeap BMH(10);
    	int op;
    	while(1)
    	{	
			cout<<"\n1.Insert";
			cout<<"\n2.Delete";
			cout<<"\n3.Sort";
			cout<<"\n4.Smallest Heap";
			cout<<"\n";
			cout<<"\nEnter Your Choice: ";
            cin>>op;
            switch(op)
{	
case 1:
{	
	BMH.insert();
	break;
}
case 2:
{	
	BMH.remove();
    cout<<"\nNode Removed ... \n";
    break;
}
case 3:
{	
	BMH.display();
	break;
}
case 4:
{	BMH.getMin();
	break;
}
	case 5:
	exit(1);
}	
   	}
    	system("pause");
    	return(0);
}


