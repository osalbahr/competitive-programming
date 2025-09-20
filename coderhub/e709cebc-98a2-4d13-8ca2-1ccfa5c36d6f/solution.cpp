#include <iostream>
using namespace std;

vector<int> distributeGifts(vector<int> familySizes,vector<int> totalGifts) { 
    vector<int> ans;
    for (size_t i = 0; i < familySizes.size(); i++) {
        ans.push_back(totalGifts[i] / familySizes[i]);
    }
    return ans;
}
