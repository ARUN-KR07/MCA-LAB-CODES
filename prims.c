#include<stdio.h>

int n,ne=1,i,j,a,b,u,v,min=999;
int mincost=0,cost[10][10],visited[10]={10};


void main()
    {
        printf("prims algorithm \n");

        printf("enter no:of vertices \n");
        scanf("%d",&n);

        printf("enter adjacency matrix \n");

        for(i=1;i<=n;i++)
        {
           for(j=0;j<=n;j++)
           {
                scanf("%d",&cost[i][j]);
                if(cost[i][j]==0)
                   cost[i][j]=999;
           }
        }

        visited[1]=1;

        while(ne<n)
            {
                for(i=1;i<=n;i++)
                    for(j=1;j<=n;j++)
                        if(cost[i][j]<min&&visited[i]!=0)
                            {
                                min=cost[i][j];
                                a=u=i;
                                b=v=j;

                            }

                if(visited[u]==0 || visited[v]==0)
                {
                    printf("\n%d edge %d:(%d,%d) cost%d\n",ne++,a,b,min);
                    mincost+=min;
                }

                cost[a][b]=cost[b][a]=999;


            }
        printf("\nminimum cost = %d\n",mincost);
    }