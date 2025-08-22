#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = 0;
    while (n--) {
        int a;
        cin >> a;
        total += a;
    }

    cout << total << endl;
}
