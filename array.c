// same type of element 

// 10 int  a b c -> 10 ? 
// int a[10];
// a[0] a[1] a[2]

#include<stdio.h>


int main(){
    // 5 element 
    int array[5];
    
    array[0]=100;
    array[1]=200;
    array[2]=300;
    array[3]=400;
    array[4]=500;

    int sum1=0;
     //for loop


    // initialization  :  condition : increment / decrement 
    for(int i=0;i<5;i++){
        sum1=sum1+array[i];
    }

    // while loop


    //initialization -> outside of the block 
    // while (condition) -> increment // decrement 
    int sum2=0;
    int i=0;
     while(i<5){
        sum2=sum2+array[i];
        
        i++;
     }


     // do while loop 

     // intialization 
     // increment / decrement 
     // condition check 

     int j=0; 

     int sum3=0;
     do
     {
        j++;
        sum3=sum3+array[j];
        
     } while (j<5);
    


    int sum=array[0]+array[1]+array[2]+array[3]+array[4];
    printf("%d\n",sum);
    printf("%d\n",sum1);
    printf("%d\n",sum2);
    printf("%d\n",sum3);
}