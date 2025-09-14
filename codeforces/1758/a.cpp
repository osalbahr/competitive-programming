#include <iostream>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    for (int i = (int)s.size() - 1; i >= 0; i--)
    {
        s += s[i];
    }

    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
