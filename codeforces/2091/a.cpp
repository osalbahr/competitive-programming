#include <iostream>
#include <vector>

using namespace std;

int solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int zeros = 0;
    int ones = 0;
    int threes = 0;
    int twos = 0;
    int fives = 0;

    for (int i = 0; i < n; i++) {
        int a = v[i];

        if (a == 0) zeros++;
        else if (a == 1) ones++;
        else if (a == 3) threes++;
        else if (a == 2) twos++;
        else if (a == 5) fives++;

        if (zeros >= 3 && ones >= 1 && threes >= 1 && twos >= 2 && fives >= 1)
            return i + 1;
    }

    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << endl;
}
