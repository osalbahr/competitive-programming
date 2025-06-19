#include <iostream>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    int rb, cb;
    cin >> rb >> cb;

    int rd, cd;
    cin >> rd >> cd;

    int dr = 1;
    int dc = 1;
    int steps = 0;
    while (rb != rd && cb != cd) {
        if (rb == n) dr = -1;
        if (rb == 1) dr = 1;
        if (cb == m) dc = -1;
        if (cb == 1) dc = 1;

        rb += dr;
        cb += dc;

        steps++;
    }

    cout << steps << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
