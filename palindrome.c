#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int *ac,char *ar[]);
{
    char a[20];
    a=ar;
    int i,j,p=0;
    j= strlen(a);

    for (i=0;i<=strlen(a)/2;i++) {
        if (a[i] == a(j-i-1)) {
            p++
        }
    } 
    if (p = j/i) 
        printf("string is palindrome");
    else
    printf("string is not palindrome");
}