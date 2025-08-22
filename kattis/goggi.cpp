#include <iostream>

using namespace std;

int main()
{
    int a, b;
    string symbol;
    cin >> a >> symbol >> b;

    if (a > b) {
        cout << ">" << endl;
    } else if (a < b) {
        cout << "<" << endl;
    } else { // a == b
        cout << "Goggi svangur!" << endl;
    }
}
