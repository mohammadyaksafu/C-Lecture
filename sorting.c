#include<stdio.h>

/*2 6 3 7 1
1 2 3 6 7 */

// temp 2
// a[0]=1 
// a[4]=2

// 1   6 3 7 2
// 1   2 6 7 3
// 1 2 3 7 6
// 1 2 3 6 7

// 6 5


int main(){
    int a[5]={2, 6, 3, 7, 1};
    int n=5;
     
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                //swaping
                int temp= a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}

