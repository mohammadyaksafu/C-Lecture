#include<stdio.h>
#include<stdbool.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        char b;
        b=a-'a';
        b='A'+b;
        printf("\n%c",b);
    }
    else {
        char b;
        b=a-'A';
        b='a'+b;
        printf("\n%c",b);
    }
}

