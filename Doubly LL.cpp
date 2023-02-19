#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
struct node
{
struct node *next;
int data;
struct node *prev;
};
	struct node *start =NULL;
	struct node *create_ll(struct node *);
	struct node *display(struct node *);
	struct node *insert_beg(struct node *);
	struct node *insert_end(struct node *);
	struct node *insert_before(struct node *start);
	struct node *insert_after(struct node *start);
	struct node *insert_sorted(struct node *start);
	struct node *delete_beg(struct node *);
	struct node *delete_end(struct node *);
	struct node *delete_node(struct node *start);
	struct node *delete_before(struct node *start);
	struct node *delete_after(struct node *start);
	struct node *delete_sorted(struct node *start);
	struct node *delete_list(struct node *start);
int main()
{
int option;
do
{
	cout<<"\n****MAIN MENU****";
	cout<<"\n 1: create a list";
	cout<<"\n 2: Display the list";
	cout<<"\n 3: Add a node in the begnning";
	cout<<"\n 4: Add a node at the end";
   cout<<"\n 5: Add a node before a given node ";
   cout<<"\n 6: Add a node after a given node";
   cout<<"\n 7: Add a node in a sorted linked list";
   cout<<"\n 8: Delete node from the begnning";
   cout<<"\n 9: Delete node from the end";
   cout<<"\n 10: Delete node a given node";
   cout<<"\n 11: Delete node before a given node";
   cout<<"\n 12: Delete node after a given node";
   cout<<"\n 13: Delete node from from a sorted linked list";
   cout<<"\n 14: Delete the entire list";
   cout<<"\n 15: Exit";
   cout<<"\n *****";
   cout<<"\n \n Enter your option:";
   cin>>option;
   
   
   switch(option)
   {
    case 1:start=create_ll(start);
        cout<<"\n DOUBLY LINKED LIST CREATED";
        break;
    case 2:start=display(start);
        break;
    case 3:start=insert_beg(start);
         break;
    case 4:start=insert_end(start);
         break;
    case 5:start=insert_before(start);
         break;
    case 6:start=insert_after(start);
         break;
    case 7:start=insert_sorted(start);
         break;
    case 8:start=delete_beg(start);
         break;
    case 9:start=delete_end(start);
         break;
    case 10:start=delete_node(start);
         break;
    case 11:start=delete_before(start);
         break;
    case 12:start=delete_after(start);
         break;
    case 13:start=delete_sorted(start);
         break;
    case 14:start=delete_list(start);
         cout<<"\n List is empty";
         break;
}
}
while(option !=15);
getch();
return 0;
}
struct node *create_ll(struct node *start)
{
struct node *new_node;
int num;
cout<<"\n Enter -1 to end";
cout<<"\n Enter the data";
cin>>num;
while(num !=-1)
{
if(start==NULL)
{
	start=(struct node*)malloc(sizeof(struct node *));
	start->prev=NULL;
	start->data=num;
	start->next=NULL;
}
else
{
	new_node=(struct node *)malloc(sizeof(struct node*));
	new_node->prev=NULL;
	new_node->data=num;
	new_node->next=start;
	start->prev=new_node;
	start=new_node;
}
	cout<<"\n Enter the data:";
	cin>>num;
}
	return start;
}
	struct node *display(struct node *start)
{
	struct node *ptr;
	ptr=start;
	cout<<"\n";
	while(ptr!=NULL)
{
	cout<<ptr->data;
	ptr=ptr->next;
}
	return start;
}
	struct node *insert_beg(struct node *start)
{
	struct node *new_node;
	int num;
	cout<<"\n Enter the data:";
	cin>>num;
	new_node=(struct node *)malloc(sizeof(struct node *));
	start->prev=new_node;
	new_node->next=start;
	new_node->prev=NULL;
	new_node->data=num;
	start=new_node;
	return start;
}
	struct node *insert_end(struct node *start)
{
	struct node *ptr, *new_node;
	int num;
	cout<<"\n Enter the data:";
	cin>>num;
	new_node=(struct node *)malloc(sizeof(struct node *));
	new_node->data=num;
	ptr=start;
	while(ptr->next != NULL)
	 ptr=ptr->next;
	 ptr->next=new_node;
	 new_node->prev=ptr;
	 new_node->next=NULL;
	 return start;
}
	struct node *insert_before(struct node *start)
{
	struct node *new_node,*ptr;
	int num,val;
	cout<<"\n Enter the data:";
	cin>>num;
	cout<<"Enter the value before which the data has to be inserted";
	cin>>val;
	new_node=(struct node *)malloc(sizeof(struct node *));
	new_node->data=num;
	ptr=start;
	while(ptr->data != val)
	ptr=ptr->next;
	new_node->next=ptr;
	ptr->prev->next=new_node;
	ptr->prev=new_node;
	return start;
}
	struct node *insert_after(struct node *start)
{
struct node *new_node,*ptr;
	int num,val;
	cout<<"\n Enter the data:";
	cin>>num;
	cout<<"Enter the value after which the data has to be inserted";
	cin>>val;
	new_node=(struct node *)malloc(sizeof(struct node *));
	new_node->data=num;
	ptr=start;
	while(ptr->data != val)
	ptr=ptr->next;
	new_node->prev=ptr;
	new_node->next=ptr->next;
	ptr->next->prev=new_node;
	ptr->next=new_node;
return start;
}
struct node *insert_sorted(struct node *start)
{
	struct node *new_node,*ptr;
	int num;
	cout<<"\n Enter the data";
	cin>>num;
	new_node=(struct node *)malloc(sizeof(struct node *));
	new_node->data=num;
	ptr=start;
	while(ptr->data<num)
	{
	ptr=ptr->next;
	if(ptr->next==NULL)
	break;
	
	}
if(ptr->next==NULL)
{
	ptr->next=new_node;
	new_node->prev=ptr;
	new_node->next=NULL;
}
else
{
	new_node->next=ptr;
	new_node->prev=ptr->prev;
	ptr->prev->next=new_node;
	ptr->prev=new_node;
}
return start;
}
	struct node *delete_beg(struct node *start)
{
	struct node*ptr;
	ptr = start;
	start = start->next;
	start->prev = NULL;
	return start;
}
struct node *delete_end(struct node *start)
{
	struct node *ptr;
	ptr=start;
	while(ptr->next !=NULL)
	ptr = ptr->next;
	ptr->prev->next =NULL;
	free(ptr);
	return start;
}
	struct node *delete_node(struct node *start)
{
	struct node *ptr;
	int val;
	cout<<"ENTER The value of the node which has to be deleted:";
	cin>>val;
	ptr=start;
	if(ptr->data==val)
{
	start=delete_beg(start);
	return start;
}
else
{
	while(ptr->data !=val)
	ptr=ptr->next;
	ptr->prev->next=ptr->next;
	ptr->next->prev=ptr->prev;
	free(ptr);
	return  start;
}
}
	struct node *delete_after(struct node *start)
{
	struct node*ptr,*temp;
	int val;
	cout<<"Enter the value after which the node has to be deleted: ";
	cin>>val;
	ptr=start;
	while(ptr->data !=val)
	ptr =ptr->next;
	temp=ptr->next;
	ptr->next=temp->next;
	temp->next->prev=ptr;
	free(temp);
	return start;
}
	struct node *delete_before(struct node*start)
{
	struct node*ptr,*temp;
	int val;
	cout<<"\nEnter the value before which the node has to deleted: ";
	cin>>val;
	ptr=start;
	while(ptr->data !=val)
	ptr=ptr->next;
	temp=ptr->prev;
	if(temp == start)
	start = delete_beg(start);
	else
{
		ptr->prev= temp->prev;
	temp->prev->next=ptr;
}
	free(temp);
	return start;
}
	struct node *delete_sorted(struct node *start)
{
	struct node*ptr;
	int val;
	cout<<"Enter the value of the node which has to be deleted: ";
	cin>>val;
	ptr=start;
	while(ptr->data !=val)
	ptr=ptr->next;
	ptr->prev->next=ptr->next;
	free(ptr);
	return start;
}
	struct node *delete_list(struct node *start)
{
	while(start !=NULL)
	start =delete_beg(start);
	return start;
}
