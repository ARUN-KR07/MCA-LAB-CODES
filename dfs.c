#include<stdio.h>


int G[10][10],visited[10],n,v;

void DFS(int i)
{
    int j;
    printf("\n%d",i);
        visited[i]=1;
    for(j=0;j<n;j++)
        if(visited[j]==0&&G[i][j]==1)
        DFS(j);
}

void main()
{
    int i,j;
    printf("enter the number of vertices :");
    scanf("%d",&n);

printf("enter the adjacency matrix of the graph :\n");
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
scanf("%d",&G[i][j]);
for(i=0;i<n;i++)
    visited[i]=0;
printf("enter the starting vertex :");
scanf("%d",&v);
    DFS(v);
}