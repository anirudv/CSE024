#include <iostream>

using namespace std;

int main(){
    /* your code goes here */

    
    string vowel;
    cin >> vowel;

    if (vowel == "A" || vowel == "E" || vowel == "I" || vowel == "O" || vowel == "U" || vowel == "a" || vowel == "e" || vowel == "i" || vowel == "o" || vowel == "u" ) {
        cout << "Letter is a vowel." << endl;
    }
    else {
        cout << "Letter is not a vowel." << endl;
    }
    

    return 0;
    



}
