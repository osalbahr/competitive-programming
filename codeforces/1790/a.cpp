#include <iostream>

using namespace std;

int solve()
{
    string s;
    cin >> s;

    int total = 0;
    string pi = "314159265358979323846264338327";
    for (int i = 0; i < min(s.size(), pi.size()); i++) {
        if (s[i] == pi[i]) {
            total++;
        } else {
            return total;
        }
    }

    return total;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << endl;
}
