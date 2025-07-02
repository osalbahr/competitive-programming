#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int total = 3 * (n / 15);
    for (int i = 0; i < 3; i++) {
        int a = (n / 15) * 15 + i;
        if (a > n) {
            break;
        }

        total += (a % 3) == (a % 5);
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
