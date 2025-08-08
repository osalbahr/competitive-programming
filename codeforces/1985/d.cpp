#include <iostream>
#include <vector>

using namespace std;

pair<int, int> solve()
{
    int n, m;
    cin >> n >> m;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '#') {
                int k = i;
                while (k + 1 < n && v[k + 1][j] == '#')
                    k++;

                return {(i + k) / 2 + 1, j + 1};
            }
        }
    }

    exit(1);
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        pair<int, int> p = solve();
        cout << p.first << " " << p.second << endl;
    }
}
