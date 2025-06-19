#include <iostream>

using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if (min(a, c) < min(b, d)) {
        cout << "Flower" << endl;
    } else {
        cout << "Gellyfish" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
