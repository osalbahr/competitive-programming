#include <iostream>
using namespace std;

bool stringContains(string firstName,string contains) { 
    auto pos = firstName.find(contains);
    return pos != string::npos;
}
