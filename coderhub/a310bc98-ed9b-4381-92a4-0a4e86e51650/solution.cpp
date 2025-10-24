#include <iostream>
using namespace std;

string reverse_case(string strParam) { 
    string ans;
    for (char ch : strParam) {
        ans += ch ^ 32;
    }

    return ans;
}
