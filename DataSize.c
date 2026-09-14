#include <stdio.h>

int main() {
    int d ;
    float f ;
    char c ;
    double lf ;


    int result1, result2, result3, result4;

    result1 = sizeof(d);
    result2 = sizeof(f);
    result3 = sizeof(c);
    result4 = sizeof(lf);

    printf("Size of integer variable d: %d bytes\n", result1);
    printf("Size of float variable f: %d bytes\n", result2);
    printf("Size of character variable c: %d bytes\n", result3);
    printf("Size of double variable lf: %d bytes\n", result4);


    // This program calculates the size of different data types in C and prints the results to the console. It uses the sizeof operator to determine the size of each variable type and stores the results in separate integer variables. Finally, it prints the sizes in bytes for each data type.


    return 0;

}
