#include<stdio.h>
//compaile time 
int main(){
    int a[]={ 1,2,-3,-4,0,0};
    int n=6;
    int p=0,ne=0,z=0;
    for(int i=0;i<n;i++){
        if(a[i]<0)ne++;
        else if(a[i]>0)p++;
        else z++;
    }
    printf("%d %d %d",p,ne,z);

}