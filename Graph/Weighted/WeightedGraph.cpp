//
// Created by Cosmi on 07-Mar-23.
//

#include "WeightedGraph.h"

WeightedGraph::WeightedGraph(int c) {
    adjList.resize(c);
}

void WeightedGraph::addEdge(int src, int dst, int w) {
    adjList[src].emplace_back(dst, w);
    adjList[dst].emplace_back(src, w);
}

vector<Edge> &WeightedGraph::getNeighbors(int src) {
    return adjList[src];
}

size_t WeightedGraph::getNumVertices() {
    return adjList.size();
}

// A temporary main function to execute the code of the Weighted Graph
int weighted_graph_main() {
    int capacity = 5;
    WeightedGraph graph(capacity);

    graph.addEdge(0, 1, 4);
    graph.addEdge(0, 2, 2);
    graph.addEdge(1, 3, 5);
    graph.addEdge(2, 4, 1);
    graph.addEdge(3, 4, 3);

    for (int i = 0; i < capacity; i++) {
        cout << "Neighbors of vertex " << i << ": ";
        vector<Edge> neighbors = graph.getNeighbors(i);

        for (Edge neighbor: neighbors) {
            cout << neighbor.node << " (weight " << neighbor.weight << ") ";
        }
        cout << endl;
    }

    return 0;
}