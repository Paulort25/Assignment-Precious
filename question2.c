#include <stdio.h>

// This function receives copies of A and B
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function after swap: A = %d, B = %d\n", a, b);
}

int main() {
    int A = 10, B = 20;
    
    printf("Main before swap: A = %d, B = %d\n", A, B);
    swapByValue(A, B);
    // The original variables remain unchanged!
    printf("Main after swap: A = %d, B = %d\n", A, B); 
    
    return 0;
}