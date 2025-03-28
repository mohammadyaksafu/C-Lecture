#include<stdio.h>


//run time  
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int p=0,ne=0,z=0;
    for(int i=0;i<n;i++){
        if(a[i]<0)ne++;
        else if(a[i]>0)p++;
        else z++;
    }
    printf("%d %d %d",p,ne,z);

}