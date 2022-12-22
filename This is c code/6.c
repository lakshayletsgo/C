//Using if else statements
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter 2 Numbers: ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2){
        printf("Number 1 is greater");   	
    }else{
        printf("Number 2 is greater");
    }
    return 0;
}
