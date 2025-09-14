#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> isUniq;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        isUniq[v[i]]++;
    }
    

    int ans = -1;
    int smallest = -1;
    for (int i = 0; i < n; i++) {
        int a = v[i];
        if (isUniq[a] > 1) continue;

        if (ans == -1) {
            smallest = a;
            ans = i + 1;
            continue;
        }

        if (a < smallest) {
            smallest = a;
            ans = i + 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
