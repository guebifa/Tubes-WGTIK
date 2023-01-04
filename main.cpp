#include "graph.h"

using namespace std;

int main()
{
    //Add Vertex
    adrNode G = NULL;
    adrNode P;

    P = newNode('A');
    addNode(G, P);

    P = newNode('B');
    addNode(G, P);

    P = newNode('C');
    addNode(G, P);

    P = newNode('D');
    addNode(G, P);

    //Add Edge
    addEdge(G, 'A', 'B');
    addEdge(G, 'A', 'D');
    addEdge(G, 'A', 'C');

    addEdge(G, 'B', 'D');
    addEdge(G, 'B', 'A');

    addEdge(G, 'C', 'A');

    addEdge(G, 'D', 'A');
    addEdge(G, 'D', 'B');

    printGraph(G);

    //Mengecek Hubungan Vertex dab Edge
    char a, b;
    cout << "Masukkan Vertex : ";
    cin >> a;
    cout << "Masukkan Edge   : ";
    cin >> b;

    bool x;
    x = isConnected(G, a, b);
    if(x == 1){
        cout << "Vertex dan Edge tersebut Terhubung" << endl;
    }else if (x == 0){
        cout << "Vertex dan Edge tersebut Tidak Terhubung" << endl;
    }

}
