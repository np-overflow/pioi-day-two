#include <iostream>
#include "Graph/Directed/DirectedGraph.h"
#include "Graph/Undirected/UndirectedGraph.h"
#include "Graph/Weighted/WeightedGraph.h"
#include "HashTable/OpenAddressing/HashTable_OALP.h"
#include "Map/Dictionary/Dictionary.h"

using namespace std;

int main() {
    cout << "Day 2: Data Structure" << endl;

    directed_graph_main();
    undirected_graph_main();
    weighted_graph_main();
    hash_table_oalp_main();
    dictionary_main();

    return 0;
}
