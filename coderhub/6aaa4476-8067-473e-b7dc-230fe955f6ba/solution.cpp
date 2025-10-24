#include <iostream>
using namespace std;

int countWords(string txt) { 
    int total = 1;
    for (char ch : txt) {
        if (ch == ' ') {
            total++;
        }
    }

    return total;
}
