#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node *next;
};
struct node *front=NULL, *rear=NULL;
void insertion (int val)
{
		struct node *ptr;
		ptr=(struct node*)malloc(sizeof(struct node));
		ptr->data=val;
		ptr->next=NULL;
		if(front==NULL){
		front = ptr;
		rear=ptr;
}
else
{
	rear->next = ptr;
	rear=ptr;
}
}
void deletion()
{
	struct node *ptr;
	ptr=front;
	if(front==NULL)
{
cout<<"\n Queue s empty";
}
else
{
	front=front->next;
	cout<<"\n Deleted element is"<<ptr->data;
	free(ptr);

}
}
void display()
{
		struct node *ptr;
		ptr=front;
		if(front==NULL)
{
	cout<<"Queue is empty";
}
else
{
cout<<"\n Elements in queue are :";
while(ptr!=NULL)
{
		cout<<ptr->data;
		ptr=ptr->next;
		} cout<<endl;

}
}
int main(){
int val,option;
cout<<"\nEnter your choice";
do{
	cout<<"\n1.Insert";
	cout<<"\n2.Delete";
	cout<<"\n3.Display";
	cout<<"\n4.Exit";
	cout<<"\nEnter your option : ";
	cin>>option;
switch(option){
			case 1:{
			cout<<"\nEnter the number to be inserted: ";
			cin>>val;
			insertion(val);
			break;
				}
			case 2:{
			deletion();
			break;
			}
			case 3:{
			
			display();
			break;
			}
		case 4:{
		exit(0);
		break;
		}
		}
		}while(option<=4);
		getch();
		return 0;
		}
