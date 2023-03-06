//
// Created by Cosmi on 07-Mar-23.
//

#include "UndirectedGraph.h"

UndirectedGraph::UndirectedGraph(int c) {
    adjList.resize(c);
}

void UndirectedGraph::addEdge(int src, int dst) {
    adjList[src].push_back(dst);
    adjList[dst].push_back(src);
}

vector<int> &UndirectedGraph::getNeighbors(int src) {
    return adjList[src];
}

size_t UndirectedGraph::getNumVertices() {
    return adjList.size();
}

// A temporary main function to execute the code of the Undirected Graph
int undirected_graph_main() {
    int capacity = 5;
    UndirectedGraph graph(capacity);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(3, 4);

    for (int i = 0; i < capacity; i++) {
        cout << "Neighbors of vertex " << i << ": ";
        vector<int> neighbors = graph.getNeighbors(i);

        for (int neighbor: neighbors) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}