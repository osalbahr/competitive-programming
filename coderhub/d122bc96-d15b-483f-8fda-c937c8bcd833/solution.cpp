#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n == 1) return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

vector<int> primes_nums(vector<int> numbers) { 
    vector<int> ans;
    for (int n : numbers) {
        if (is_prime(n)) {
            ans.push_back(n);
        }
    }

    return ans;
}
