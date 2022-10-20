// A simple program to calculate the length of a line segment
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // Your code here

    double x1, y1, x2, y2;
    //cout << "Enter x1: " << endl;
    cin >> x1;
    //cout << "Enter y1: " << endl;
    cin >> y1;
    //cout << "Enter x2: " << endl;
    cin >> x2;
    //cout << "Enter y2: " << endl;
    cin >> y2;

    cout << sqrt(pow(x1-x2,2) + pow(y1-y2,2)) << endl;

    return 0;
}
