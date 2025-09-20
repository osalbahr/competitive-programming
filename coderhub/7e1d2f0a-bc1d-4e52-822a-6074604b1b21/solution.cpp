#include <iostream>
using namespace std;

int sum_even(vector<int> arr) { 
    int ans = 0;
    for (int num : arr) {
        if (num % 2 == 0) {
            ans += num;
        }
    }

    return ans;
}
