#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b && a<=c)printf("Smallest %d",a);
    else if(b<=a && b<=c)printf("Smallest %d",b);
    else printf("Smallest  %d",c);
}