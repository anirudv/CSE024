#include <iostream>

// This is so we can use functions from geometry.h
#include "geometry.h"

using namespace std;

// We will be reading command line parameters
int main() {
    int x, y, rx, ry, rw, rh;
    if (pointInRect(x, y, rx, ry, rw, rh)) {
        cout << "INSIDE" << endl;
    }
    else {
        cout << "OUTSIDE" << endl;
    }
    return 0;
}
