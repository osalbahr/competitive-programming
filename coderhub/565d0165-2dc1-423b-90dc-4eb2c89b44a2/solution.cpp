#include <iostream>
#include <map>

using namespace std;

int repetitions(string s) { 
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

    return maximum;
}
