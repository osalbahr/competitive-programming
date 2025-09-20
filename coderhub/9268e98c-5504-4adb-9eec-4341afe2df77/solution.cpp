#include <iostream>
using namespace std;

int smallest_number(vector<int> arr) { 
    int ans = arr[0];
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] < ans) ans = arr[i];
    }
    return ans;
}
