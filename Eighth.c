//To check whether a number is positive, negative or zero
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    if(number>0){
        printf("It is postive");
    }else if(number<0){
        printf("It is negative");
    }else{
        printf("It is zero");
    }   
    return 0;
}
