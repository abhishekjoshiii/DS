
#include <stdio.h>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#define MAX 5
using namespace std;
void depth_first_search(int adj[][MAX],int visited[],int start)
{
	 int stack[MAX];
int top = -1, i;
cout<<start + 65;
visited[start] = 1;
stack[++top] = start;
while(top=!-1)
{
 start = stack[top];
	 	 for(i = 0; i < MAX; i++)
 {
 	 if(adj[start][i] && visited[i] == 0)
 {
 stack[++top] = i;
cout<<i + 65;
visited[i] = 1;
break;
 }
 }
	 	 if(i == MAX)
 top--;
}
}
int main()
{
	 int adj[MAX][MAX];
	 int visited[MAX] = {0}, i, j;
	 printf("\n Enter the adjacency matrix: ");
	 for(i = 0; i < MAX; i++)
	 	 for(j = 0; j < MAX; j++)
 cin>>adj[i][j];
cout<<"DFS Traversal: ";
	 depth_first_search(adj,visited,0);
cout<<"\n";
	 return 0;
}
