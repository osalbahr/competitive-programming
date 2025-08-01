#include <iostream>
#include <map>

using namespace std;

string solve()
{
    map<char, char> mp;
    
    int n;
    cin >> n;

    string s;
    cin >> s;

    string alt;
    for (char ch : s) {
        if (mp.count(ch) == 0) {
            if (alt.empty()) {
                mp[ch] = '0';
            } else {
                mp[ch] = alt.back() == '0' ? '1' : '0';
            }
        }

        alt += mp[ch];
    }

    for (size_t i = 0; i < alt.size(); i++) {
        if (i % 2 == 0 && alt[i] != '0') return "NO";
        if (i % 2 == 1 && alt[i] != '1') return "NO";
    }

    return "YES";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << endl;
}
