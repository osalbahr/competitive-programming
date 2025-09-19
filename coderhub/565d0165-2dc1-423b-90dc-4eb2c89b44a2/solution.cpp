#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int maximum = 0;
    for (size_t i = 0; i < s.size(); i++) {
        int current = 1;
        for (size_t j = i + 1; j < s.size(); j++) {
            if (s[i] == s[j]) {
                current++;
            } else {
                break;
            }
        }

        if (current > maximum) {
            maximum = current;
        }
    }

    cout << maximum << endl;
}
