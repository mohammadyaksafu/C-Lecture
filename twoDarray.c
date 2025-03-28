#include<stdio.h>

int main(){
   int n,m;
   scanf("%d%d",&n,&m);
   int a[n][m],b[n][m];
   
   //row 
   for(int i=0;i<n;i++){
    // column 
     for(int j=0;j<m;j++){
        scanf("%d",&a[i][j]);
     }
   }

   //row 
   for(int i=0;i<n;i++){
    // column 
     for(int j=0;j<m;j++){
        scanf("%d",&b[i][j]);
     }
   }

   int sum[n][m];

   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       sum[i][j]=a[i][j]+b[i][j];
       printf("%d ",sum[i][j]);
    }
    printf("\n");
    
  }
 

}



