//To check whether a number is divisible by 5 and 11
#include<stdio.h>
int main(){
    int num,number;
    printf("Enter the number: ");
    scanf("%d",&num);
    if((num%5==0)&&(num%11==0)){
        printf("The number is divisible by 5 and 11 ");
    }else{
        printf("It is not divisible by 5 and 11\n");
    }   

     printf("Enter the number to find whether a it is even or odd: ");
    scanf("%d",&number);
    if(number%2==0){
        printf("It is even\n");
    }else{
        printf("It is odd");
    }  

    return 0;
}
