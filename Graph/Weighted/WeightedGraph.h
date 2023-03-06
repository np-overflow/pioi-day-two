//
// Created by Cosmi on 07-Mar-23.
//

#ifndef PIOI_WORKSHOP_WEIGHTED_GRAPH_H
#define PIOI_WORKSHOP_WEIGHTED_GRAPH_H


#include <iostream>
#include <vector>

using namespace std;

struct Edge {
    int node;
    int weight;

    Edge(int node, int weight) : node(node), weight(weight) {}
};

class WeightedGraph {
private:
    vector<vector<Edge>> adjList;

public:
    explicit WeightedGraph(int c);

    void addEdge(int src, int dst, int w);

    vector<Edge> &getNeighbors(int src);

    size_t getNumVertices();
};

int weighted_graph_main();


#endif //PIOI_WORKSHOP_WEIGHTED_GRAPH_H
