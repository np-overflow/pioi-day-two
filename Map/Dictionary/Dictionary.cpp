//
// Created by Cosmi on 07-Mar-23.
//

#include "Dictionary.h"

Dictionary::Dictionary() {
    size = 0;
}

bool Dictionary::containsKey(const string &key) {
    for (int i = 0; i < size; i++) {
        if (keys[i] == key) {
            return true;
        }
    }
    return false;
}

int Dictionary::get(const string &key) {
    for (int i = 0; i < size; i++) {
        if (keys[i] == key) {
            return values[i];
        }
    }
    return -1; // default value if key not found
}

void Dictionary::put(string key, int value) {
    if (size >= MAX_SIZE) {
        cout << "Error: dictionary is full" << std::endl;
        return;
    }

    // passed by value and only copied once; consider moving it to avoid unnecessary copies
    keys[size] = std::move(key);
    values[size] = value;
    size++;
}

int dictionary_main() {
    Dictionary myDict;
    myDict.put("apple", 5);
    myDict.put("banana", 10);

    if (myDict.containsKey("banana")) {
        cout << "Banana is in the dictionary with value " << myDict.get("banana") << endl;
    } else {
        cout << "Banana is not in the dictionary" << endl;
    }

    if (myDict.containsKey("pear")) {
        cout << "Pear is in the dictionary with value " << myDict.get("pear") << endl;
    } else {
        cout << "Pear is not in the dictionary" << endl;
    }

    return 0;
}