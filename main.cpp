#include <iostream>
#include "Graph/Directed/DirectedGraph.h"
#include "Graph/Undirected/UndirectedGraph.h"
#include "Graph/Weighted/WeightedGraph.h"

using namespace std;

int main() {
    cout << "Day 2: Data Structure" << endl;

    directed_graph_main();
    undirected_graph_main();
    weighted_graph_main();

    return 0;
}
