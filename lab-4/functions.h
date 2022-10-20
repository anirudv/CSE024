#ifndef FUNCTIONS_H
#define FUNCTIONS_H

bool isEven(int n){
    return n % 2 == 0;

}

int sumOdd(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (isEven(arr[i]) == false) {
            sum += arr[i];
        }
    }
    return sum;
}



#endif
