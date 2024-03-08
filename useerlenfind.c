/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main () {
    char s[20];
    int l;
    printf("enter string:");
    gets(s);
    printf("length:%d",length(s));
}
int length(char s[]) {
    int i=0;
    for (i=0;s[i] != '\0';i++);
    return i;
}*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function prototype
int length(char s[]);

int main() {
    char s[20];
    int l;

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);  

    s[strcspn(s, "\n")] = '\0';

    printf("Length: %d\n", length(s));

    return 0;
}

int length(char s[]) {
    int i = 0;
    for (i = 0; s[i] != '\0'; i++);
    return i;
}
