#include <iostream>
using namespace std;

vector<float> array_root(vector<float> arr) { 
    vector<float> ans;
    for (size_t i = 0; i < arr.size(); i++) {
        ans.push_back(sqrt(arr[i]));
    }
    return ans;
}
