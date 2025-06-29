#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (s[s.size() - 1] != ')') {
        cout << "NO" << endl;
        return;
    }

    size_t i = s.size() - 1;
    while (i > 0) {
        if (s[i - 1] != ')') {
            break;
        }

        i--;
    }

    cout << ((s.size() - i > i) ? "YES" : "NO") << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
