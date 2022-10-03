#include <stdio.h>
#include <stdlib.h>
intsourceV,Vertex,Edge,time,visited[10],Graph[10][10];
void DepthFirstSearch(inti)
{
int j;
visited[i]=1;
printf(" %d->",i++);
for(j=0;j<Vertex;j++)
{
if(Graph[i][j]==1&&visited[j]==0)
DepthFirstSearch(j);
}
}
intmain()
{
inti,j,vertex1,vertex2;
printf("\t\t\tGraphs\n");
printf("Enter no. of edges:");
scanf("%d",&Edge);
printf("Enter no. of vertices:");
scanf("%d",&Vertex);
for(i=0;i<Vertex;i++)
{
for(j=0;j<Vertex;j++)
Graph[i][j]=0;
}
for(i=0;i<Edge;i++)
{
printf("Enter the edges in V1 V2 : ");
scanf("%d%d",&vertex1,&vertex2);
Graph[vertex1-1][vertex2-1]=1;
}
for(i=0;i<Vertex;i++)
{
for(j=0;j<Vertex;j++)
printf(" %d ",Graph[i][j]);
printf("\n");
}
printf("Enter source Vertex: ");
scanf("%d",&sourceV);
DepthFirstSearch(sourceV-1);
return 0;
}
