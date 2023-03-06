//
// Created by Cosmi on 07-Mar-23.
//

#ifndef PIOI_WORKSHOP_HASHTABLE_OALP_H
#define PIOI_WORKSHOP_HASHTABLE_OALP_H


#include <iostream>
#include <string>

using namespace std;

const int SIZE = 10;

class HashTable_OALP { // OALP: Open Addressing - Linear Probing
private:
    int keys[SIZE]{};
    string values[SIZE]{};

public:
    HashTable_OALP();

    static int hash(int key);

    void put(int key, const string &value);

    string get(int key);

    void remove(int key);
};

int hash_table_oalp_main();


#endif //PIOI_WORKSHOP_HASHTABLE_OALP_H
