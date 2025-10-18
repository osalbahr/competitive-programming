#include <iostream>
using namespace std;

bool compare_two_words(string s1,string s2) { 
    return s1.substr(s1.size() - 2, 2) == s2.substr(s2.size() - 2, 2);
}
