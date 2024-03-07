#include <stdio.h>
#include <string.h>
int main() {
    do {
    char str[10],*ptr;
    int str1;
    printf("enter string:\t");
    gets(str);
    ptr = str;
    str1=0;
    while(*ptr != '\0') {
        str1 ++;
        ptr ++;
    }
    printf("length of string:%d\n",str1);
    }while(1);
    return 0;
}