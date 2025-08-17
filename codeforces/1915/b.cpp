#include <iostream>
#include <vector>

using namespace std;

char solve()
{
    vector<string> v(3);
    for (int i = 0; i < 3; i++)
        cin >> v[i];

    for (string s : v) {
        if (s.find_first_of('?') != string::npos) {
            int total = 'A' + 'B' + 'C' + '?';
            return total - (s[0] + s[1] + s[2]);
        }
    }

    return '?';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << endl;
}
