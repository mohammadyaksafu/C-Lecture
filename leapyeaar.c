#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(year%100==0){
        year=year/100;
        (year%4==0)?printf("Leap year") : printf("Not Leap Year");
    }
    else if(year%4==0)printf("Leap year");
    else printf("Not Leap Year");
}

