#include <iostream>
#include <map>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    map<char, int> mp;
    for (char ch : s)
        mp[ch]++;

    if (mp.size() == 1) {
        cout << "NO" << endl;
        return;
    }

    string r;
    for (auto [ch, count] : mp) {
        for (int i = 0; i < count; i++) r += ch;
    }

    if (s == r) {
        swap(r[0], r[r.size() -1]);
    }

    cout << "YES" << endl;
    cout << r << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
