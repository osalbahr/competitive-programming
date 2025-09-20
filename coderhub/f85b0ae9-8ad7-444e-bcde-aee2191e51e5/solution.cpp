#include <iostream>
#include <algorithm>

using namespace std;

vector<int> countdown(int num) { 
    if (num <=3) {
        return {0};
    }

    vector<int> ans;
    for (int i = num - 3; i > 0; i -= 3) {
        if (i % 2 == 0) ans.push_back(i);
    }

    reverse(ans.begin(), ans.end());

    return ans;
}
