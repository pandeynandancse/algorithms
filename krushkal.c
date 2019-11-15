#include <stdio.h>

struct Edge
{
    int src, dest, weight;    
}


struct Graph
{
    int V, E;
    struct Edge* edge;
}



struct Graph* createGraph(int ver,int edges)
{
    struct Graph* graph =(struct Graph*)malloc(sizeof(struct Graph));
    graph->V = ver;
    graph-E = edges;
    graph->edge = new Edge[edges];
    return graph;
}


struct subset
{
    int parent ;
    int rank;
}


krushkalMST(struct Graph* graph)
{
    int V = graph->V;
    struct  subset* subsets = (struct subset*)malloc(V * sizeof(struct subset));
    for(int i=0; i<V;i++)
    {
        subsets[i].parent = V;
        subsets[i].rank = 0;
    }
    
    
    
}



int main()
{
   int ver,edges;
   struct Graph* graph = NULL;
   printf("Enter the number of vertices and edges : ");
   scanf("vertices : %d",&ver);
   scanf("edges : %d",&edges);
   graph = createGraph(ver,edges);
   krushkalMST(graph);
   return 0;
}
