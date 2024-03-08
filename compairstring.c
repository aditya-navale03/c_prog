#include <stdio.h>
#include <string.h>

void compare(char *a, char *b);

int main() {
    char x[100], y[100]; 

    printf("Enter first string: ");
    scanf("%s", x);

    printf("Enter second string: ");
    scanf("%s", y);

    compare(x, y);

    
}

void compare(char *a, char *b) {
    if (*a == *b)
        printf("Both strings are the same.\n");
    else
        printf("Both strings are not the same.\n");
}
