#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int sum = 0;
    for (int a : v) {
        sum += a;
    }

    if (sum % n != 0) {
        cout << "NO" << endl;
        return;
    }

    int avg = sum / n;
    for (int a : v) {
        if (a == avg) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
