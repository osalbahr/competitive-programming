#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> input;

    string line;
    while (getline(cin, line))
        input.push_back(line);

    int total = 0;
    size_t j = 0;
    for (size_t i = 0; i < input.size(); i++) {
        if (input[i][j] == '#')
            total++;

        j = (j + 3) % input[0].size();
    }

    cout << total << endl;
}
