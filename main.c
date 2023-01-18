#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "graph.h"

int main()
{
    pnode temp = NULL;
    pnode *head = &temp;
    char ans;
    char ch;
    int node_of_num = 0;
    int src = 0;

    while (scanf("%c", &ans) != EOF)
    {
 
        if(ans == 'A')
        {
            deleteGraph_cmd(head);
            scanf("%d", &node_of_num);
            *head =  build_graph_cmd(node_of_num);
            
            scanf("%c", &ch);
            
            while(scanf("%c", &ch)!=0){
                if(ch == 'n')
                {
                scanf("%d",&src);
                add_edge_cmd(head,src);
                }
                else
                {
                    break;
                }
            }
            
            ans = ch;
        }

        if(ans == 'B')
        {
            insert_node(head);
            continue;
        }
        if(ans == 'D')
        {
            node_remove(head);
            continue;
        }
        if(ans == 'S')
        {
            int start_point = -1, dest = -1;
            scanf("%d %d", &start_point, &dest);
            int dis = shortsPath_cmd(*head, start_point, dest);
            printf("Dijsktra shortest path: %d ",dis);
            printf("\n");
            continue;
        }
        if(ans == 'T')
        {
            int tsp = TSP_cmd(*head);
            printf("TSP shortest path: %d ",tsp);
            printf("\n");
            continue;
        }
       
    
    }
    deleteGraph_cmd(head);
    return 0;
}

