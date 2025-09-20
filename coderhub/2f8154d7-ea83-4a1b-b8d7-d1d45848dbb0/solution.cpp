#include <iostream>
using namespace std;

vector<int> delete_element_in_array(vector<int> arr,int index) { 
    vector<int> ans;
    for (size_t i = 0; i < arr.size(); i++) {
        if (i != index) ans.push_back(arr[i]);
    }
    return ans;
}
