#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
using namespace std;

typedef char infograph;
typedef struct ElmNode* adrNode;
typedef struct ElmEdge* adrEdge;

struct ElmEdge {
    adrNode nextNode;     
    adrEdge nextEdge;
};

struct ElmNode {
    infograph info;
    int visited;
    adrEdge firstEdge;
    adrNode nextNode;
};

struct Graph {
    adrNode first;
};

void CreateGraph(Graph &G);
adrNode InsertNode(Graph &G, infograph x);
void ConnectNode(adrNode from, adrNode to);   
void PrintInfoGraph(Graph G);

void PrintDFS(Graph &G, adrNode N);
void PrintBFS(Graph &G, adrNode N);

#endif
