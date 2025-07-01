#include <iostream>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    while (q--) {
        int l, r;
        cin >> l >> r;

        int total = 0;
        for (int i = l - 1; i <= r - 1; i++) {
            total += s[i] - 'a' + 1;
        }

        cout << total << endl;
    }
}
