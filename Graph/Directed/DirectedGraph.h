//
// Created by Cosmi on 07-Mar-23.
//

#ifndef PIOI_WORKSHOP_DIRECTED_GRAPH_H
#define PIOI_WORKSHOP_DIRECTED_GRAPH_H


#include <iostream>
#include <vector>

using namespace std;

class DirectedGraph {
private:
    vector<vector<int>> adjList;

public:
    explicit DirectedGraph(int capacity);

    void addEdge(int source, int destination);

    vector<int> &getNeighbors(int source);

    size_t getNumVertices();
};

int directed_graph_main();


#endif //PIOI_WORKSHOP_DIRECTED_GRAPH_H
