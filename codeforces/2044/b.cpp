#include <iostream>

using namespace std;

void solve()
{
    string a;
    cin >> a;

    string b;
    for (int i = a.size() - 1; i >= 0; i--) {
        switch (a[i]) {
            case 'p':
                b += 'q';
                break;

            case 'q':
                b += 'p';
                break;

            case 'w':
                b += 'w';
                break;
            
            default:
                exit(1);
        }
    }

    cout << b << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
