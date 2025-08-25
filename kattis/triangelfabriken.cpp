#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v(3);
    for (int i = 0; i < 3; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int a = v[0], b = v[1], c = v[2];
    (void)a;
    (void)b;

    if (c > 90) {
        cout << "Trubbig Triangel" << endl;
    } else if (c < 90) {
        cout << "Spetsig Triangel" << endl;
    } else { // delta == 90
        cout << "Ratvinklig Triangel" << endl;
    }
}
