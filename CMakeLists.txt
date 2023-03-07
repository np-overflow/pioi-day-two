cmake_minimum_required(VERSION 3.16)
project(PIOI_Workshop)

set(CMAKE_CXX_STANDARD 11)

add_executable(main 
    main.cpp 
    Graph/Directed/DirectedGraph.cpp 
    Graph/Directed/DirectedGraph.h 
    Graph/Undirected/UndirectedGraph.cpp 
    Graph/Undirected/UndirectedGraph.h 
    Graph/Weighted/WeightedGraph.cpp 
    Graph/Weighted/WeightedGraph.h 
    "HashTable/OpenAddressing/HashTable_OALP.cpp" 
    "HashTable/OpenAddressing/HashTable_OALP.h" 
    Map/Dictionary/Dictionary.cpp 
    Map/Dictionary/Dictionary.h 
    LinkedList/Singly-LinkedList/SinglyLinkedList.cpp 
    LinkedList/Singly-LinkedList/SinglyLinkedList.h 
    LinkedList/Doubly-LinkedList/DoublyLinkedList.cpp 
    LinkedList/Doubly-LinkedList/DoublyLinkedList.h
    Stack/Stack.cpp
    Stack/Stack.h
    Queue/Queue.cpp
    Queue/Queue.h
)