#include <iostream>
using namespace std;

bool stringCheck(vector<string> value) { 
    for (size_t i = 1; i < value.size(); i++) {
        if (value[i] != value[i - 1]) return false;
    }

    return true;
}
