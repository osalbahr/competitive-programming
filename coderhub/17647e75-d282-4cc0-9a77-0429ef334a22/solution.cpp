#include <iostream>
#include <numeric>

using namespace std;

float average(vector<int> values) { 
    float total = 0;
    for (int v : values) {
        total += v;
    }
    return total / values.size();
}
