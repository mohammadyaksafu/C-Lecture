#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)printf("Largest A");
    else if(b>=a && b>=c)printf("Largest B");
    else printf("Largest C");
}

//4 4 3
//&& 
// || 