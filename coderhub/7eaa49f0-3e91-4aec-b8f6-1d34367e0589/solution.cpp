#include <iostream>
using namespace std;

int findDonationTargetDay(vector<float> donations,float target) { 
    float total = 0;
    for (int i = 0; i < donations.size(); i++) {
        total += donations[i];
        if (total >= target) {
            return i + 1;
        }
    }

    return -1;
}
