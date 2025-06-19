#include <iostream>
#include <sstream>

using namespace std;

void solve()
{
    string line;
    getline(cin, line);
    stringstream ss(line);

    string ans;
    string word;
    while (ss >> word)
        ans += word[0];
    
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    string garbage;
    getline(cin, garbage);
    while (t--)
        solve();
}
