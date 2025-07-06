#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int ans = -1;
    int currentMax = -1;
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;

        if (a <= 10 && b > currentMax) {
            ans = i;
            currentMax = b;
        }
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
