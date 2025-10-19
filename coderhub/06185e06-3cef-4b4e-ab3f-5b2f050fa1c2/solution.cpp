#include <iostream>
using namespace std;

int Decimal_places(string num) { 
    int idx = -1;
    for (int i = 0; i < num.size(); i++) {
        if (num[i] == '.') {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        return 0;
    }

    return num.size() - idx - 1;
}
