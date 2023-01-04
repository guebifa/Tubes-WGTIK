#include "graph.h"

adrNode newNode(char x){
    adrNode P = new elementVertex;
    info(P) = x;
    next(P) = NULL;
    child(P) = NULL;
    return P;
}

void addNode(adrNode &G, adrNode P){
    if(G == NULL){
        G = P;
    }else{
        adrNode Q = G;
        while(next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

adrNode findNode(adrNode G, char x){
    adrNode P = G;
    while (P != NULL && info(P) != x){
        P = next(P);
    }
    return P;
}

void addEdge(adrNode &G, char x, char y){
    if(G != NULL){
        adrNode Q = findNode(G, x);
        if (Q != NULL){
            if(child(Q) == NULL){
                adrEdge P = new elementEdge;
                infoEdge(P) = y;
                next(P) = NULL;
                child(Q) = P;
            }else{
                adrEdge P = new elementEdge;
                infoEdge(P) = y;
                next(P) = NULL;
                next(P) = child(Q);
                child(Q) = P;
            }
        }else{
            cout << "Vertex Kosong !!" << endl;
        }
    }else{
        cout << "Graph Kosong !!" << endl;
    }
}

bool isConnected(adrNode G, char x, char y){
    adrNode P = findNode(G, x);
    if (P != NULL){
        adrEdge Q = child(P);
        while(Q != NULL && infoEdge(Q) != y){
            Q = next(Q);
        }
        if (Q != NULL){
            return true;
        }else{
            return false;
        }
    }
}

void printGraph(adrNode G){
    if(G == NULL){
        cout << "Graph Kosong !!" << endl;
    }else{
        adrNode P = G;
        while (P != NULL){
            cout << "Node " << info(P) << " :";
            adrEdge Q = child(P);
            while(Q != NULL){
                cout << " - " << infoEdge(Q);
                Q = next(Q);
            }
            P = next(P);
            cout << endl;
        }
        cout << endl;
    }
}

