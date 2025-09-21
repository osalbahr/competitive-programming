#include <iostream>
using namespace std;

string countDown(int number) { 
    if (number == 0) {
        return "0";
    }

    string ans;
    ans += to_string(number);

    for (int i = number - 1; i >= 0; i--) {
        ans += " ";
        ans += to_string(i);
    }

    return ans;
}
