#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long;

ll f(ll a)
{
    vector<ll> digits;
    while (a > 0) {
        digits.push_back(a % 10);
        a /= 10;
    }

    reverse(digits.begin(), digits.end());

    ll rev = 0;
    ll mul = 1;
    for (size_t i = 0; i < digits.size(); i++) {
        rev += digits[i] * mul;
        mul *= 10;
    }

    return rev;
}

int main()
{
    ll x, y;
    cin >> x >> y;

    vector<ll> v = {x, y};

    for (ll i = 0; i < 10 - 2; i++) {
        ll a1 = v[v.size() - 2];
        ll a2 = v[v.size() - 1];
        ll a3 = f(a1 + a2);

        v.push_back(a3);
    }

    cout << v[10 - 1] << endl;
}
