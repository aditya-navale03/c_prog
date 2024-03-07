#include<stdio.h>
struct students {
    int srno;
    char name[100];
    float percentage;
};

int main(){
    struct students s;
    do {
        printf("enter the srno:(press 0 to exit):");
        scanf("%d",&s.srno);

        if(s.srno == 0) {
           break;            
        }
  
    printf("enter the name:");
    scanf("%s",s.name);
    printf("enter the percentage:");
    scanf("%f",&s.percentage);
printf("srno:%d\nname:%s\npercentage:%.2f\n",s.srno,s.name,s.percentage);
}while (1);
return 0;
}
