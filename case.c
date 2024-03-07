#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    char str[20],str1[20];

    do {
    printf("enter first string:");
    scanf("%s",str);
    printf("enter second string:");
    scanf("%s",str1);

    if (stricmp(str,str1)==0) {
        printf("string are same\n");
    }else { 
    printf("string are not same\n");
    }exit;
     } while (str,str1 != 0);
    return 0;
}
