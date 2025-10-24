#include <iostream>
using namespace std;

string say_hi_bye(string name,int num) { 
    if (num == 1) {
        return "Hi " + name;
    }

    return "Bye " + name;
}
