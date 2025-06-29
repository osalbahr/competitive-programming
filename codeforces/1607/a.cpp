#include <iostream>
#include <map>

using namespace std;

void solve()
{
    string keyboard;
    cin >> keyboard;

    string s;
    cin >> s;

    map<char, int> charToPos;
    for (size_t i = 0; i < keyboard.size(); i++) {
        charToPos[keyboard[i]] = i;
    }

    int total = 0;
    for (size_t i = 1; i < s.size(); i++) {
        total += abs(charToPos[s[i]] - charToPos[s[i - 1]]);
    }

    cout << total << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
