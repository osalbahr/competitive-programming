#include <iostream>
using namespace std;

string hasSpace(string strParam) { 
    string ans;
    for (char ch : strParam) {
        if (ch == ' ') ch = '#';
        ans += ch;
    }
    return ans;
}
