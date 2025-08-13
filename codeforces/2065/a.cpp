#include <iostream>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    for (size_t i = 0; i < s.size() - 2; i++)
        cout << s[i];

    cout << "i" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
