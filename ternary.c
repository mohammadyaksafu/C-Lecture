#include<stdio.h>
int main(){
    printf("Insert Your number : ");
    int number; 
    scanf("%d",&number);
    (number>=40)?printf("You pass in the exam\n") : printf("You Fail\n");

    (number>=80)?printf("A+\n"): (number>=70)?printf("A\n"):printf("You Pass\n");


    // (condition) ? true : false 
    // if(number>=40)printf("You pass in the exam");
    // else printf("You Fail");
}
