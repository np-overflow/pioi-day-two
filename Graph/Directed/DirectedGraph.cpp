//
// Created by Cosmi on 07-Mar-23.
//

#include "DirectedGraph.h"

DirectedGraph::DirectedGraph(int capacity) {
    adjList.resize(capacity);
}

void DirectedGraph::addEdge(int source, int destination) {
    adjList[source].push_back(destination);
}

vector<int> &DirectedGraph::getNeighbors(int source) {
    return adjList[source];
}

size_t DirectedGraph::getNumVertices() {
    return adjList.size();
}

// A temporary main function to execute the code of the Directed Graph
int directed_graph_main() {
    int capacity = 5;
    DirectedGraph graph(capacity);

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