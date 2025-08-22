#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int total = 0;
    for (char ch : s) {
        if (ch >= 'a' && ch <= 'z') total++;
        if (ch >= 'A' && ch <= 'Z') total++;
    }

    cout << total << endl;
}
