#include <iostream>

using namespace std;

void solve()
{
    int l, r;
    cin >> l >> r;

    int total = 0;
    int n = l;
    for (int i = 1; n <= r; i++) {
        total++;
        n += i;
    }

    cout << total << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
