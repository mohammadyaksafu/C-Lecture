#include<stdio.h>
#include<stdbool.h>
// year month 
// day 
int main(){
    int month,year;
    bool leapyear;
    scanf("%d %d",&month,&year);
    if(year%100==0){
        year=year/100;
        if(year%4==0)leapyear=true ;
        else leapyear=false;
    }
    else if(year%4==0) leapyear=true;
    else leapyear=false;

    if(month==4 || month ==6 || month==9 ||month==11)printf("30 days");
    else if(month==2 && leapyear==true)printf("29 days");
    else if (month==2 && leapyear== false)printf("28 days");
    else printf("31 days ");
   

}

 