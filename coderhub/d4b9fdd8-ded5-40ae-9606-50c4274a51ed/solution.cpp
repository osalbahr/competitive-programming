#include <iostream>
using namespace std;

int getBiggestShared(vector<int> a,vector<int> b) { 
    int biggest = 0;

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            if (a[i] == b[j] && a[i] > biggest) {
                biggest = a[i];
            }
        }
    }

    return biggest;
}
