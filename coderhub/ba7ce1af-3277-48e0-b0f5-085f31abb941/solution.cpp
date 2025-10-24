#include <iostream>
using namespace std;

vector<float> distributeSacrificeShares(vector<int> familySizes,float totalWeight) { 
    int totalPeople = 0;
    for (int size : familySizes) {
        totalPeople += size;
    }

    float perPerson = totalWeight / totalPeople;

    vector<float> ans;
    for (int size : familySizes) {
        ans.push_back(size * perPerson);
    }

    return ans;
}
