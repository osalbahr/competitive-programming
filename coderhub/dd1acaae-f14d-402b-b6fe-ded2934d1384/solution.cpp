#include <iostream>
#include <algorithm>

using namespace std;

bool isMirrored(int num) { 
    vector<int> digits;
    while (num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }

    vector<int> other = digits;
    reverse(other.begin(), other.end());

    return digits == other;
}
