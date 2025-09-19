#include <iostream>
using namespace std;

vector<int> tribonacci(int num) { 
    vector<int> ans;
    for (int i = 0; i < num; i++) {
        if (i <= 2) {
            ans.push_back(1);
        } else {
            ans.push_back(ans[i - 1] + ans[i - 2] + ans[i - 3]);
        }
    }

    return ans;
}
