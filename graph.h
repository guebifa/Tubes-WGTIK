#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define child(P) (P)->child
#define infoEdge(P) (P)->infoEdge

typedef struct elementVertex *adrNode;
typedef struct elementEdge *adrEdge;

struct elementVertex{
    char info;
    adrNode next;
    adrEdge child;
};

struct elementEdge{
    char infoEdge;
    adrEdge next;
};


adrNode newNode(char x);
void addNode(adrNode &G, adrNode P);
adrNode findNode(adrNode G, char x);
void addEdge(adrNode &G, char x, char y);
bool isConnected(adrNode G, char x, char y);
void printGraph(adrNode G);

#endif // GRAPH_H_INCLUDED
