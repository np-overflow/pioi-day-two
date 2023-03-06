//
// Created by Cosmi on 07-Mar-23.
//

#ifndef PIOI_WORKSHOP_DICTIONARY_H
#define PIOI_WORKSHOP_DICTIONARY_H


#include <iostream>
#include <string>

using namespace std;

class Dictionary {
private:
    int size;
    static const int MAX_SIZE = 100;
    string keys[MAX_SIZE]{};
    int values[MAX_SIZE]{};

public:
    Dictionary();

    bool containsKey(const string &key);

    int get(const string &key);

    void put(string key, int value);
};

int dictionary_main();


#endif //PIOI_WORKSHOP_DICTIONARY_H
