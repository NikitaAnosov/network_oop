#ifndef GRAPH_
#define GRAPH_
#define INFINITY 999999999

typedef struct GRAPH_NODE_ *pnode;

typedef struct edge_ {
    int weight;
    pnode endpoint;
    struct edge_ *next;
} edge, *pedge;


typedef struct GRAPH_NODE_ {
    int id;
    pedge edges;
    struct GRAPH_NODE_ *next;
} node, *pnode;

typedef struct Dijkstra {
    pnode node;
    int weight;
    int tag;
    struct Dijkstra *next;
} dijkstra, *pdijkstra;


node* build_graph_cmd(int num_of_nodes);

void add_edge_cmd(pnode *head,int src);

void insert_edge(pnode temp,int dest,int w,pnode *head);

pnode getNode(int id, pnode *head);

void deleteGraph_cmd(pnode *head);

void node_remove(pnode *head);

void free_edges(pnode p);

void insert_node(pnode *head);

void del_edge(pnode *head,int n);

int shortsPath_cmd(pnode head,int src,int dest);

int TSP_cmd(pnode head);
 

#endif


