#include <iostream>

using namespace std;

int solve()
{
    int a, b;
    cin >> a >> b;

    if (a == b) {
        return 0;
    }

    if (b > a) {
        if ((b - a) % 2 == 1) {
            return 1;
        }

        return 2;
    }

    // b < a
    if ((a - b) % 2 == 0) {
        return 1;
    }

    return 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << endl;
}
