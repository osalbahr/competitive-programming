#include <iostream>
using namespace std;

string less_or_more_than_zero(int number) { 
    if (number > 0) {
        return "Greater than zero";
    } else if (number < 0) {
        return "Less than zero";
    }

    return "Equal to zero";
}
