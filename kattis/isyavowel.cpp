#include <iostream>
#include <set>

using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    int total = 0;
    int yCount = 0;
    for (char ch : s) {
        if (vowels.count(ch) > 0) total++;
        if (ch == 'y') yCount++;
    }

    cout << total << " " << (total + yCount) << endl;
}
