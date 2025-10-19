#include <iostream>
#include <algorithm>

using namespace std;

int sum_two_smallest_nums(vector<int> arr) { 
    sort(arr.begin(), arr.end());
    return arr[0] + arr[1];
}
