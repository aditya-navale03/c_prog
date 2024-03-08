#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <number1> <number2>\n", argv[0]);
        return 1; // Returning a non-zero value to indicate an error
    }

    int a, b;
    printf("Number of parameters: %d\n", argc);
    
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    printf("1st number is: %d\n", a);
    printf("2nd number is: %d\n", b);
    printf("Sum is: %d\n", a + b);

    return 0; // Indicating successful execution
}
