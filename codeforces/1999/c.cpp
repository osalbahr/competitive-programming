#include <iostream>
#include <vector>

using namespace std;

string solve()
{
    int n, s, m;
    cin >> n >> s >> m;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    if (v[0].first >= s)
        return "YES";

    if (m - v[v.size() - 1].second >= s)
        return "YES";

    for (int i = 0; i < n - 1; i++)
        if (v[i + 1].first - v[i].second >= s)
            return "YES";

    return "NO";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << endl;
}
