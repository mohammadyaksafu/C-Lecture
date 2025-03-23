#include<stdio.h>

int main(){
    printf("Insert Your number : ");
    int number; 
    scanf("%d",&number);
    if(number>=80)printf("A+");
    else if(number>=75)printf("A");
    else if(number>=70)printf("A-");
    else if(number>=65)printf("B+");
    else if(number>=60)printf("B");
    else if(number>=55)printf("B-");
    else if(number>=50)printf("C");
    else printf("Fail");
}
