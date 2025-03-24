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


//1900 -> leap year not 
//2000 -> leap year 
//1700-> Leap year not 

//1904 -> leap year 
//100 4 
// 4 divisible leap year 
//1896+4 1900 