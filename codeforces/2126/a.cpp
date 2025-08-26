#include <iostream>

using namespace std;

void solve()
{
    int x;
    cin >> x;

    int y = x % 10;
    while (x > 0) {
        y = min(y, x % 10);
        x /= 10;
    }

    cout << y << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
