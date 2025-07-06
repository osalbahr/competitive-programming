#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int adjacent = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] == 1 && v[i][j + 1] == 1) {
                adjacent++;
                break;
            }
        }

        if (adjacent > 0) break;
    }

    for (int i = n - 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] == 1 && v[i][j + 1] == 1) {
                adjacent++;
                break;
            }
        }

        if (adjacent > 0) break;
    }

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
