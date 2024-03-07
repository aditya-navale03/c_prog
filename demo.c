#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[200];
    char comp[200];
    char end[20];

    do {
        printf("Enter the string to reverse (enter 'exit' to end): ");
        scanf("%s", str);

        if (strcmp(str, "exit") == 0) {
            printf("Exiting the program.\n");
            return 0;
        }

        printf("The original string is: %s\n", str);

        int len = strlen(str);

        for (int i = 0; i < len; i++) {
            comp[i] = str[len - i - 1];
        }
        comp[len] = '\0';

        printf("The reversed string is: %s\n", comp);

        if (strcmp(str, comp) == 0) {
            printf("String is a palindrome.\n");
        } else {
            printf("String is not a palindrome.\n");
        }
    } while (1);

    return 0;
}
