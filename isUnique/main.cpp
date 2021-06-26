#include <iostream>
#include "isUnique.h"

int main() {
    string s = "test";
    cout << IsUnique::isUnique(s) << endl;
    cout << IsUnique::isUniqueOnPlace(s) << endl;
    s = "tesy";
    cout << IsUnique::isUnique(s) << endl;
    cout << IsUnique::isUniqueOnPlace(s) << endl;
    return 0;
}
