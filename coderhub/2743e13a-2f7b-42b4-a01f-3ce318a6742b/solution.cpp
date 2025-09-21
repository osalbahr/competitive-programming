#include <iostream>

using namespace std;

float get_mean(vector<int> values) { 
    float total = 0;
    for (int v : values) {
        total += v;
    }
    return total / values.size();
}
