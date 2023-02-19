#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<bits/stdc++.h>
#include <stdio.h>

using namespace std;

struct node
{
		int data;
		struct node *next;
		struct node *prev;
};
		struct node *start=NULL;
		struct node *create_ll(struct node *);
		struct node *display(struct node *);
		struct node *insert_beg(struct node *);
		struct node *insert_end(struct node  *);
		struct node *insert_before(struct node *start);
		struct node *insert_after(struct node *start);
		struct node *insert_sorted(struct node *start);
		struct node *delete_beg(struct node *);
		struct node *delete_end(struct node *);
		struct node *delete_node(struct node *start);
		struct node *delete_after(struct node *start);
		struct node *delete_sorted(struct node *start);
		struct node *delete_list(struct node *start);
		struct node *sort_list(struct node *start);

int main()
{
		int option;
do
{
		
		cout<<"\n 1: Create a List: ";
		cout<<"\n 2: Display the list: ";
		cout<<"\n 3: Add a node in the beginning";
		cout<<"\n 4: Add a node at the end";
		cout<<"\n 5: Add a node before a given node";
		cout<<"\n 6: Add a node after a given node";
		cout<<"\n 7: Add a node in a sorted linked list";
		cout<<"\n 8: Delete a node in the beginning";
		cout<<"\n 9: Delete a node at the end";
		cout<<"\n 10: Delete a node a given node";
		cout<<"\n 11: Delete a node before a given node";
		cout<<"\n 12: Delete a node in a sorted linked list";
		cout<<"\n 13: Delete entire list";
		cout<<"\n 14: Sort the list";
		cout<<"\n 15: Exit ";
		cout<<"\nEnter your option : ";
		cin>>option;
switch(option)
{
	case 1:
	start = create_ll(start);
	cout<<"\n Linked list created";
	break;
	case 2:
	start = display(start);
	break;
	case 3:
	start = insert_beg(start);
	break;
	case 4:
	start = insert_end(start);
	break;
	case 5:
	start = insert_before(start);
	break;
	case 6:
	start = insert_after(start);
	break;
	case 7:
	start = insert_sorted(start);
	break;
	case 8:
	start = delete_beg(start);
	break;
	case 9:
	start = delete_end(start);
	break;
	case 10:
	start = delete_node(start);
	break;
	case 11:
	start = delete_after(start);
	break;
	case 12:
	start = delete_sorted(start);
	break;
	case 13:
	start = delete_list(start);
	cout<<"\n List is empty";
	break;
	case 14:
	start = sort_list(start);
	break;
	case 15:
		cout<<"\n Exit";
		break;
	}
}
	while(option != 15);
	getch();
	return 0;
}
	struct node *create_ll(struct node *start)
{
	struct node *new_node;
	int num;
	cout<<"\n Enter -1 to end";
	cout<<"\n Enter the Data :";
	cin>>num;
	while(num!=-1)
{
	if(start==NULL)
{
	start = (struct node*)malloc(sizeof(struct node*));
	start -> prev = NULL;
	start -> data = num;
	start -> next = NULL;
}
else
{

	new_node = (struct node*)malloc(sizeof(struct node*));
	new_node->prev = NULL;
	new_node->data=num;
	new_node->next=start;
	start -> prev = new_node;
	start = new_node;
}
	cout<<"\n Enter the data : ";
	cin>>num;
}
	return start;
}
	struct node *display(struct node *start)
{
	struct node *ptr;
	ptr = start;
	cout<<"\n";
	while(ptr != NULL)
{
   cout<<"\t"<<ptr->data;
   ptr = ptr->next;
}
	return start;
}
	struct node *insert_beg(struct node *start)
{
	struct node *new_node;
	int num;
	cout<<"\n Enter the data : ";
	cin>>num;
	new_node = (struct node *)malloc(sizeof(struct node *));
	new_node->data = num;
	new_node->next = start;
	start = new_node;
	return start;
}
	struct node *insert_end(struct node *start)
{
	struct node *ptr, *new_node;
	int num;
	cout<<"\n Enter the data : ";
	cin>>num;
	new_node = (struct node *)malloc(sizeof(struct node *));
	new_node->data = num;
	ptr = start;
	while(ptr->next != NULL)
	ptr = ptr->next;
	ptr->next = new_node;
	new_node->next = NULL;
	return start;
}
struct node *insert_before(struct node *start)
{
	struct node *new_node, *ptr, *preptr;
	int num,val;
	cout<<"\n Enter the data : ";
	cin>>num;
	cout<<"\n Enter the value before which the data has to be inserted: ";
	cin>>val;
	new_node = (struct node *)malloc(sizeof(struct node *));
	new_node->data = num;
	ptr = start;
	while(ptr->data != val)
{
	preptr=ptr;
	ptr=ptr->next;
}
	new_node->next=ptr;
	preptr->next=new_node;
	return start;	
	}
struct node *insert_after(struct node *start)
{
	struct node *new_node, *ptr, *preptr;
	int num,val;
	cout<<"\n Enter the data : ";
	cin>>num;
	cout<<"\n Enter the value after which the data has to be inserted: ";
	cin>>val;
	new_node = (struct node *)malloc(sizeof(struct node *));
	new_node->data = num;
	ptr = start;
	while(preptr->data != val)
{
	preptr=ptr;

ptr = ptr->next;
}

	new_node->next=ptr;
	preptr->next=new_node;
	return start;	
}
struct node *insert_sorted(struct node *start)
{
	struct node *new_node, *ptr, *preptr;
	int num;
	cout<<"\n Enter the data : ";
	cin>>num;
	new_node = (struct node *)malloc(sizeof(struct node *));
	new_node->data = num;
	ptr = start;
	while(ptr->data < num)
{
	preptr = ptr;
	ptr = ptr->next;
	if(ptr == NULL)

break;

}
if(ptr == NULL)
{
	preptr->next  = new_node;
	new_node->next = NULL;
}
else
{
	new_node->next = ptr;
	preptr->next = new_node;
}
return start;
}
struct node *delete_beg(struct node *start)
{
	struct node*ptr;
	ptr = start;
	start = start->next;
	free(ptr);
	return start;
}
struct node *delete_end(struct node *start)
{
	struct node *ptr, *preptr;
	ptr = start;
	while(ptr->next != NULL)
	{
		preptr = ptr;
		ptr = ptr->next;
	}
	preptr->next = NULL;
	free(ptr);
	return start;
}
struct node *delete_node(struct node *start)
{
	struct node *ptr, *preptr;
	int val;
	cout<<"\n Enter the value of the node which has to be searched : ";
	cin>>val;
	ptr = start;
	if(ptr->data == val)
	{
		start = delete_beg(start);
		return start;
	}
	else
	{
		while(ptr->data != val)
		{
			preptr = ptr;
			ptr = ptr->next;
		}
		preptr->next = ptr->next;
		free(ptr);
		return start;
	}
}
struct node *delete_after(struct node *start)
{
	struct node *ptr, *preptr;
	int val;
	cout<<"\n Enter the value after which the node has to deleted: ";
	cin>>val;
	ptr = start;
	while(preptr->data != val)
	{
		preptr = ptr;
		ptr = ptr->next;
	}
	preptr->next=ptr->next;
	free(ptr);
	return start;
}
struct node *delete_sorted(struct node *start)
{
	struct node *ptr, *preptr;
	int val;
	cout<<"\n Enter the value of the node which has to be deleted : ";
	cin>>val;
	ptr = start;
	while(ptr->data != val)
	{
		preptr = ptr;
		ptr = ptr->next;
	}
	preptr->next = ptr->next;
	free(ptr);
	return start;
}
struct node *delete_list(struct node *start)
{
	struct node *ptr;
	ptr = start;
	while(ptr->next != NULL)
	{
		cout<<"\n Is to be deleted next : "<<ptr->data;
		start = delete_beg(ptr);
		ptr = ptr->next;
	}
	return start;
}
struct node *sort_list(struct node *start)
{
	struct node *ptr1, *ptr2;
	int temp;
	ptr1 = start;
	while(ptr1->next != NULL)
	{
		ptr2 = ptr1->next;
		while(ptr2 != NULL)
		{
			if(ptr1->data > ptr2->data)
			{
				temp = ptr1->data;
				ptr1->data = ptr2->data;
				ptr2->data = temp;
			}
			ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
	return start;
}
