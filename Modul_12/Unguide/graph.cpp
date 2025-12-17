#include "graph.h"
#include <queue>

void CreateGraph(Graph &G) {
    G.first = NULL;
}

adrNode InsertNode(Graph &G, infograph x) {
    adrNode N = new ElmNode;
    N->info = x;
    N->visited = 0;
    N->firstEdge = NULL;
    N->nextNode = G.first;
    G.first = N;
    return N;
}

void ConnectNode(adrNode from, adrNode to) {
    adrEdge E = new ElmEdge;
    E->nextNode = to;
    E->nextEdge = from->firstEdge;
    from->firstEdge = E;
}

void PrintInfoGraph(Graph G) {
    adrNode N = G.first;
    while (N != NULL) {
        cout << N->info << " -> ";
        adrEdge E = N->firstEdge;
        while (E != NULL) {
            cout << E->nextNode->info << " ";
            E = E->nextEdge;
        }
        cout << endl;
        N = N->nextNode;
    }
}

void PrintDFS(Graph &G, adrNode N) {
    if (N == NULL || N->visited == 1)
        return;

    cout << N->info << " ";
    N->visited = 1;

    adrEdge E = N->firstEdge;
    while (E != NULL) {
        PrintDFS(G, E->nextNode);
        E = E->nextEdge;
    }
}

void PrintBFS(Graph &G, adrNode start) {
    queue<adrNode> Q;

    start->visited = 1;
    Q.push(start);

    while (!Q.empty()) {
        adrNode N = Q.front();
        Q.pop();
        cout << N->info << " ";

        adrEdge E = N->firstEdge;
        while (E != NULL) {
            if (E->nextNode->visited == 0) {
                E->nextNode->visited = 1;
                Q.push(E->nextNode);
            }
            E = E->nextEdge;
        }
    }
}
