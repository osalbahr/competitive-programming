#include <iostream>

using namespace std;

void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
    }

    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;
    }

    cout << n + m << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
