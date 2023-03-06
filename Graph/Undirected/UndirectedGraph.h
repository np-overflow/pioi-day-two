//
// Created by Cosmi on 07-Mar-23.
//

#ifndef PIOI_WORKSHOP_UNDIRECTED_GRAPH_H
#define PIOI_WORKSHOP_UNDIRECTED_GRAPH_H


#include <iostream>
#include <vector>

using namespace std;

class UndirectedGraph {
private:
    vector< vector<int> > adjList;

public:
    explicit UndirectedGraph(int c);

    void addEdge(int src, int dst);

    vector<int> &getNeighbors(int src);

    size_t getNumVertices();
};

int undirected_graph_main();


#endif //PIOI_WORKSHOP_UNDIRECTED_GRAPH_H
