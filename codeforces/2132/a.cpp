#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string a;
    cin >> a;

    int m;
    cin >> m;

    string b, c;
    cin >> b >> c;

    for (int i = 0; i < m; i++) {
        char cur = b[i];
        char turn = c[i];

        if (turn == 'V') {
            a = cur + a;
        } else {
            a += cur;
        }
    }

    cout << a << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
