#include <iostream>
using namespace std;

int calculate_sum(vector<int> lst) { 
    int total = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] == 7) {
            break;
        }

        total += lst[i];
    }

    return total;
}
