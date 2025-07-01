#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    vector<int> v(n + 1);

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += s[i] - 'a' + 1;
        v[i + 1] = total;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        cout << v[r] - v[l - 1] << endl;
    }
}
