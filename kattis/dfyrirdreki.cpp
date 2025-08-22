#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int delta = b*b - 4 * a * c;
    if (delta > 0) {
        cout << 2 << endl;
    } else if (delta == 0) {
        cout << 1 << endl;
    } else { // delta < 0
        cout << 0 << endl;
    }
}
