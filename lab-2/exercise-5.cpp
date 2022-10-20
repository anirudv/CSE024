// A simple program to calculate the slope of a line segment
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    // Your code here
    double first_x, first_y, second_x, second_y;
    //cout << "Enter x1: " << endl;
    cin >> first_x;
    //cout << "Enter y1: " << endl;
    cin >> first_y;
    //cout << "Enter x2: " << endl;
    cin >> second_x;
    //cout << "Enter y2: " << endl;
    cin >> second_y;

    cout << ((second_y - first_y)/(second_x - first_x)) << endl;

    


    return 0;
}
