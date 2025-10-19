#include <iostream>
#include <set>

using namespace std;

int countVowels(string s) { 
    set<char> vowels;
    vowels.insert('a');
    vowels.insert('e');
    vowels.insert('i');
    vowels.insert('o');
    vowels.insert('u');
    vowels.insert('A');
    vowels.insert('E');
    vowels.insert('I');
    vowels.insert('O');
    vowels.insert('U');

    int total = 0;
    for (char ch : s) {
        if (vowels.count(ch) > 0) {
            total++;
        }
    }

    return total;
}
