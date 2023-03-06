//
// Created by Cosmi on 07-Mar-23.
//

#ifndef PIOI_WORKSHOP_WEIGHTED_GRAPH_H
#define PIOI_WORKSHOP_WEIGHTED_GRAPH_H


#include <iostream>
#include <vector>

using namespace std;

class WeightedGraph {
private:
    vector<vector<pair<int, int>>> adjList;

public:
    explicit WeightedGraph(int c);

    void addEdge(int src, int dst, int w);

    vector<pair<int, int>> &getNeighbors(int src);

    size_t getNumVertices();
};

int weighted_graph_main();


#endif //PIOI_WORKSHOP_WEIGHTED_GRAPH_H
