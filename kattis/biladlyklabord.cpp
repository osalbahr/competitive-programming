#include <iostream>

using namespace std;

int main()
{
    string line;
    getline(cin, line);

    cout << line[0];
    for (int i = 1; i < (int)line.size(); i++) {
        if (line[i] != line[i - 1])
            cout << line[i];
    }
    cout << endl;
}
