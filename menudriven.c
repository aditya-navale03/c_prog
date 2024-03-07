#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int choice;

    char str[100]; 
    char cop1[100];
    char cop[100];
    char con1[100];
    char con[100];
    char com1[100];
    char com[100];

    do {
        printf("*************MENU********\n");
        printf("1: length of string\n");
        printf("2: copy string\n");
        printf("3: concatenation of string\n");
        printf("4: compare of string\n");
        printf("5: reverse of string\n");
        printf("6: uppercase of string\n");
        printf("7: lowercase of string\n");
        printf("8: exit\n");

        printf("enter the choice:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("enter the string to find length:");
                scanf("%s", str);
                printf("the length of string is:%d\n", strlen(str));
                break;

            case 2:
                printf("enter the string to copy:");
                scanf("%s", cop1);
                printf("the string is:%s\n", cop1);
                printf("the copied string is:%s\n", strcpy(cop, cop1));
                break;

            case 3:
                printf("enter two strings to concatenate:");
                scanf("%s%s", con1, con);
                printf("concatenated string is:%s\n", strcat(con1, con));
                break;

            case 4:
                printf("enter two strings to compare:");
                scanf("%s%s", com1, com);
                if (strcmp(com1, com) == 0)
                    printf("both strings are the same\n");
                else
                    printf("both strings are not the same\n");
                break;

            case 5:
                printf("enter the string to reverse:");
                scanf("%s", str);
                printf("the string is:%s\n", str);

                
                int len = strlen(str);
                for (int i = 0; i < len / 2; i++) {
                    char temp = str[i];
                    str[i] = str[len - i - 1];
                    str[len - i - 1] = temp;
                }
                printf("the reverse string is:%s\n", str);
                break;

            case 6:
                printf("enter the string to convert to uppercase:");
                scanf("%s", str);
                for (int i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'a' && str[i] <= 'z') {
                        str[i] = str[i] - 32;
                    }
                }
                printf("the uppercase string is:%s\n", str);
                break;

            case 7:
                printf("enter the string to convert to lowercase:");
                scanf("%s", str);
                for (int i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'A' && str[i] <= 'Z') {
                        str[i] = str[i] + 32;
                    }
                }
                printf("the lowercase string is:%s\n", str);
                break;

            case 8:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 8);

    return 0;
}
