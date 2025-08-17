#include <iostream>
#include <cmath>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    unsigned int total = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        total += a;
    }

    unsigned int root = sqrtl(total);
    cout << ((root * root == total) ? "YES" : "NO") << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
