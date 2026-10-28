#include <stdio.h>
#include <stdlib.h>

// Operation functions
int add(int a, int b) {
    printf("Adding 'a' and 'b'\n");
    return a + b;
}

int subtract(int a, int b) {
    printf("Subtracting 'b' from 'a'\n");
    return a - b;
}

int multiply(int a, int b) {
    printf("Multiplying 'a' and 'b'\n");
    return a * b;
}

int divide(int a, int b) {
    printf("Dividing 'a' by 'b'\n");
    return a / b;
}

int exit_program(int a, int b) {
    exit(0);
    return 0;
}

// Function pointer typedef
typedef int (*Operation)(int, int);

int main(void) {
    int a = 6;
    int b = 3;
    char choice;

    // Array of function pointers mapped to indices 0 through 4
    Operation ops[] = {add, subtract, multiply, divide, exit_program};

    while (1) {
        printf("Operand 'a' : %d | Operand 'b' : %d\n", a, b);
        printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
        
        if (scanf(" %c", &choice) != 1) {
            break;
        }

        int index = choice - '0';
        int result = ops[index](a, b);
        printf("x = %d\n", result);
    }

    return 0;
}