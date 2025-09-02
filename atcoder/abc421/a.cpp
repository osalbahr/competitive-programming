#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    int x;
    cin >> x;

    string y;
    cin >> y;

    if (s[x - 1] == y) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
