#include<stdio.h>
int main() {
    int i;
    char str[10];

do {
    printf("enter the string to convert to lowercase:");
                scanf("%s", str);
                for (int i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'A' && str[i] <= 'Z') {
                        str[i] = str[i] + 32;
                        printf("\n");
                    }
                    
                }
         printf("the lowercase string is:%s\n",str);
}    while (str !=0);
 return 0;   
}


