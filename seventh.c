//To find the maximum of 3 numbers 
#include<stdio.h>
int main(){
    
    int num1,num2,number,num3;
    printf("Enter 3 numbes: ");
    
    scanf("%d%d%d",&num1,&num2,&num3);
    if((num1>num2)&&(num1>num3)){
        number = num1;
    }else if((num2>num3)&&(num2>num1)){
        number = num2;
        
    }else if((num3>num1)&&(num3>num1)){
        number = num3;
    }else{
        printf("At least 2 numbers are equal");
    }
    printf("%d is the greatest",number); 
        
    return 0;
}
