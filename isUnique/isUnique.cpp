//
// Created by cydonia on 26.06.2021.
//

#include "isUnique.h"

bool IsUnique::isUnique(string s) {
    unordered_map<char, int> hash_table;
    int sz = s.size();
    for (int i = 0; i < sz; ++i) {
        if (hash_table[s[i]]) return false;
        hash_table[s[i]] = 1;
    }
    return true;
}

bool IsUnique::isUniqueOnPlace(string s) {
    int sz = s.size();
    for (int i = 0; i < sz - 1; ++i) {
        for (int j = i + 1; j < sz; ++j) {
            if (s[i] == s[j]) return false;
        }
    }
    return true;
}
