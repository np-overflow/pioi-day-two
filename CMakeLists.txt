cmake_minimum_required(VERSION 3.24)
project(PIOI_Workshop)

set(CMAKE_CXX_STANDARD 11)

add_executable(PIOI_Workshop main.cpp Graph/Directed/DirectedGraph.cpp Graph/Directed/DirectedGraph.h Graph/Undirected/UndirectedGraph.cpp Graph/Undirected/UndirectedGraph.h Graph/Weighted/WeightedGraph.cpp Graph/Weighted/WeightedGraph.h "HashTable/OpenAddressing/HashTable_OALP.cpp" "HashTable/OpenAddressing/HashTable_OALP.h" Map/Dictionary/Dictionary.cpp Map/Dictionary/Dictionary.h)
