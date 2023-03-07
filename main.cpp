#include <iostream>
#include "LinkedList/Singly-LinkedList/SinglyLinkedList.h"
#include "LinkedList/Doubly-LinkedList/DoublyLinkedList.h"

#include "Queue/Queue.h"
#include "Stack/Stack.h"

#include "Graph/Directed/DirectedGraph.h"
#include "Graph/Undirected/UndirectedGraph.h"
#include "Graph/Weighted/WeightedGraph.h"

#include "HashTable/OpenAddressing/HashTable_OALP.h"
#include "Map/Dictionary/Dictionary.h"

#include "Tree/BST/BST.h"

#include "Array/Array/Array.h"
#include "Array/ND-Array/NDArray.h"

using namespace std;

int main() {
    cout << "Day 2: Data Structure" << endl;

    directed_graph_main();
    undirected_graph_main();
    weighted_graph_main();
    hash_table_oalp_main();
    dictionary_main();
    singly_linked_list_main();
    doubly_linked_list_main();
    stack_main();
    queue_main();
    BST_main();
    array_main();
    NDArray_main();

    return 0;
}
