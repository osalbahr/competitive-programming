#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

int main()
{
    vector<string> input;

    string line;
    while (getline(cin, line))
        input.push_back(line);

    ll total = 0;
    size_t j = 0;
    for (size_t i = 0; i < input.size(); i++) {
        if (input[i][j] == '#')
            total++;

        j = (j + 1) % input[0].size();
    }

    ll total2 = 0;
    j = 0;
    for (size_t i = 0; i < input.size(); i++) {
        if (input[i][j] == '#')
            total2++;

        j = (j + 3) % input[0].size();
    }

    ll total3 = 0;
    j = 0;
    for (size_t i = 0; i < input.size(); i++) {
        if (input[i][j] == '#')
            total3++;

        j = (j + 5) % input[0].size();
    }

    ll total4 = 0;
    j = 0;
    for (size_t i = 0; i < input.size(); i++) {
        if (input[i][j] == '#')
            total4++;

        j = (j + 7) % input[0].size();
    }

    ll total5 = 0;
    j = 0;
    for (size_t i = 0; i < input.size(); i += 2) {
        if (input[i][j] == '#')
            total5++;

        j = (j + 1) % input[0].size();
    }

    cout << total * total2 * total3 * total4 * total5 << endl;
}
