#include <iostream>
using namespace std;

string middle_char(string word) {
    if (word.size() % 2 == 1) {
        return word.substr(word.size() / 2, 1);
    }

    return word.substr(word.size() / 2 - 1, 2);
}
