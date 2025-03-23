#include<stdio.h>

int main(){
    // variable declaration 
    printf("Input your age : ");
    int age;
    // Input 
    scanf("%d",&age);

    if(age>=18){
        printf("He can vote ");
    }else{
        printf("He can not vote ");
    }
}