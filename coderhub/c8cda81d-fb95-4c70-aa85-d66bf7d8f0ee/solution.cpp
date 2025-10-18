#include <iostream>
using namespace std;

int areaOrPerimeter(int length,int width) { 
    if (length == width) {
        return length * width;
    }

    return 2 * (length + width);
}
