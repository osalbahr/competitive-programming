#include <iostream>

using namespace std;

void solve()
{
    int x;
    cin >> x;
    cout << ((x % 33 == 0) ? "YES" : "NO") << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
