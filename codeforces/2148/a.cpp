#include <iostream>

using namespace std;

void solve()
{
    int x, n;
    cin >> x >> n;

    if (n % 2 == 0) {
        cout << 0 << endl;
    } else {
        cout << x << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
