#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int ans = 2;
    int maxSum = -1;
    for (int i = 2; i <= n; i++) {
        int total = 0;
        for (int j = i; j <= n; j += i) {
            total += j;
        }

        if (total > maxSum) {
            maxSum = total;
            ans = i;
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
