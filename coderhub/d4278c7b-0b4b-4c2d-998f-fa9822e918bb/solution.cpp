#include <iostream>
using namespace std;

vector<int> largest_smallest(vector<int> array_values) { 
    int largest = array_values[0];
    int smallest = array_values[0];

    for (size_t i = 1; i < array_values.size(); i++) {
        int num = array_values[i];
        if (num > largest) largest = num;
        if (num < smallest) smallest = num;
    }

    return {largest, smallest};
}
