#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> ans;
    for (ll i = 10; i <= n; i *= 10) {
        ll j = i + 1;
        if (n % j == 0) {
            ans.push_back(n / j);
        }
    }

    cout << ans.size() << endl;
    for (int i = (int)ans.size() - 1; i >= 0; i--)
        cout << ans[i] << " ";

    if (ans.size() > 0)
        cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
