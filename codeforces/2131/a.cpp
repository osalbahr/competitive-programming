#include <iostream>
#include <vector>

using namespace std;

bool iteration1(vector<int>& a, const vector<int>& b)
{
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] > b[i]) {
            a[i]--;
            return true;
        }
    }

    return false;
}

bool iteration2(vector<int>& a, const vector<int>& b)
{
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] < b[i]) {
            a[i]++;
            return true;
        }
    }

    return false;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    int total = 1;
    while (iteration1(a, b)) {
        iteration2(a, b);
        total++;
    }

    cout << total << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
