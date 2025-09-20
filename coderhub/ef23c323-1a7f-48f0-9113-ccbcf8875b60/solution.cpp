#include <iostream>
using namespace std;

vector<int> filp_even_odd(vector<int> numbers) { 
    vector<int> ans;
    for (size_t i = 0; i < numbers.size(); i++) {
        int num = numbers[i];
        if (num % 2 == 0) {
            num++;
        } else {
            num--;
        }
        ans.push_back(num);
    }
    return ans;
}
