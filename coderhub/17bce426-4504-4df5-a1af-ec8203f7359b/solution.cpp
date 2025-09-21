#include <iostream>
using namespace std;

bool find_element(vector<int> elements_array,int element) { 
    for (int current : elements_array) {
        if (current == element) {
            return true;
        }
    }

    return false;
}
