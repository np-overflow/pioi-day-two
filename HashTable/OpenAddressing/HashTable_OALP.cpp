//
// Created by Cosmi on 07-Mar-23.
//

#include "HashTable_OALP.h"

HashTable_OALP::HashTable_OALP() {
    for (int i = 0; i < SIZE; i++) {
        keys[i] = -1;
        values[i] = "";
    }
}

int HashTable_OALP::hash(int key) {
    return key % SIZE;
}

void HashTable_OALP::put(int key, const string &value) {
    int index = hash(key);

    while (keys[index] != -1) {
        if (keys[index] == key) {
            values[index] = value;
            return;
        }
        index = (index + 1) % SIZE;
    }

    keys[index] = key;
    values[index] = value;
}

string HashTable_OALP::get(int key) {
    int index = hash(key);

    while (keys[index] != -1) {
        if (keys[index] == key) {
            return values[index];
        }
        index = (index + 1) % SIZE;
    }

    return "";
}

void HashTable_OALP::remove(int key) {
    int index = hash(key);

    while (keys[index] != -1) {
        if (keys[index] == key) {
            keys[index] = -1;
            values[index] = "";
            return;
        }
        index = (index + 1) % SIZE;
    }
}

int hash_table_oalp_main() {
    HashTable_OALP table;

    cout << "-----Hash Table-----" << endl;
    // Add some key-value pairs
    table.put(1, "one");
    table.put(2, "two");
    table.put(3, "three");
    table.put(11, "eleven");

    // Get some values by key
    cout << "  ---Get value---  " << endl
         << table.get(1) << endl // Should output "one"
         << table.get(2) << endl // Should output "two"
         << table.get(3) << endl // Should output "three"
         << table.get(4) << endl // Should output an empty string
         << table.get(11) << endl; // Should output "eleven"

    // Remove a key-value pair
    cout << "Removed key: [2] from the hash table." << endl;
    table.remove(2);

    // Get some values by key again
    cout << "  ---Get value---  " << endl
         << table.get(1) << endl // Should output "one"
         << table.get(2) << endl // Should output "two"
         << table.get(3) << endl // Should output "three"
         << table.get(4) << endl // Should output an empty string
         << table.get(11) << endl; // Should output an empty string, since key 2 being removed.

    return 0;
}