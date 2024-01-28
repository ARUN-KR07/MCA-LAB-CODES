#include<stdio.h>
#include<stdlib.h>

int i,j,k,a,b,u,v,n,ne=1;
int min,mincost=0,cost[9][9],parent[9];
int find(int);
int uni(int,int);

void main()
    {
        printf("kruskals algorithm \n");

        printf("enter no:of vertices \n");
        scanf("%d",&n);

        printf("enter cost adjacency matrix \n");

        for(i=0;i<=n;i++)
        {
           for(j=0;j<=n;j++)
           {
                scanf("%d",&cost[i][j]);
                if(cost[i][j]==0)
                   cost[i][j]=999;
           }
        }
        
    }