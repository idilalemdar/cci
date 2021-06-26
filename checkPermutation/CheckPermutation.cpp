//
// Created by cydonia on 26.06.2021.
//

#include "CheckPermutation.h"

bool CheckPermutation::checkPermutation(string s1, string s2) {
    if (s1.size() != s2.size()) return false;
    int sz = s1.size();
    unordered_map<char, int> hash_table;
    for (int i = 0; i < sz; ++i) {
        if (hash_table[s1[i]]) ++hash_table[s1[i]];
        else hash_table[s1[i]] = 1;
    }
    for (int i = 0; i < sz; ++i) {
        if (!hash_table[s2[i]]) return false;
        else if (--hash_table[s2[i]] < 0) return false;
    }
    for (unordered_map<char, int>::iterator it = hash_table.begin(); it != hash_table.end(); ++it) {
        if (it->second > 0) return false;
    }
    return true;
}