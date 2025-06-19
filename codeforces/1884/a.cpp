#include <iostream>

using namespace std;

int sumDigits(int n)
{
    int ret = 0;
    while (n > 0) {
        ret += n % 10;
        n /= 10;
    }

    return ret;
}

void solve()
{
    int x, k;
    cin >> x >> k;

    for (int i = x;; i++) {
        if (sumDigits(i) % k == 0) {
            cout << i << endl;
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
