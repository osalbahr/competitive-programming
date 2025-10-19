#include <iostream>
#include <algorithm>

using namespace std;

int maxFundedCases(vector<int> needs,int budget) { 
    sort(needs.begin(), needs.end());

    int total = 0;
    for (int i = 0; i < needs.size(); i++) {
        if (budget >= needs[i]) {
            budget -= needs[i];
            total++;
        }
    }

    return total;
}
