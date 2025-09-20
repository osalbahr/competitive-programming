#include <iostream>
using namespace std;

float calculateSacrificeProfit(vector<float> buyPrices,vector<float> sellPrices) { 
    float total = 0;
    for (size_t i = 0; i < buyPrices.size(); i++) {
        total += sellPrices[i] - buyPrices[i];
    }
    return total;
}
