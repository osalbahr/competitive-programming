#include <iostream>
using namespace std;

string numbers_range(int number) { 
    string ans = "0";
    for (int i = 1; i <= number; i++) {
        ans += " ";
        ans += to_string(i);
    }

    return ans;
}
