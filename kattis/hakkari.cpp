#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    string garbage;
    getline(cin, garbage);

    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        for (int j = 0; j < m; j++) {
            char ch = line[j];
            if (ch == '*') {
                ans.push_back({i + 1, j + 1});
            }
        }
    }

    cout << ans.size() << endl;
    for (auto [r, c] : ans) {
        cout << r << " " << c << endl;
    }
}
