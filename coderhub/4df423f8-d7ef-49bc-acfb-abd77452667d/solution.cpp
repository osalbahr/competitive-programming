#include <iostream>
using namespace std;

vector<int> sub_arrays(vector<int> arr1,vector<int> arr2) { 
    for (size_t i = 0; i < arr1.size(); i++) {
        arr2[i] -= arr1[i];
    }
    return arr2;
}
