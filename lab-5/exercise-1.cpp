#include <iostream>

using namespace std;

int main(){
    // There is a hidden message in the number below
    // Your task is to decode it
    // Hint: The message is 8 letters long

    long x = 4919412188601205589;

    // Write a program that displays the decoded message below.
    
    unsigned char* n = (unsigned char*) &x;

    for (int i = 0; i < 8; i++) { 
        cout << *n; 
        n++;
    }

    
    return 0;

    
}
