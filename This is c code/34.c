//Convert temperature from farenheit to celcius and vice versa
#include<stdio.h>
int main(){
    float fh,cl;
    int choice;
 
    printf("\n1: Convert temperature from Fahrenheit to Celsius.\n"); 
    printf("2: Convert temperature from Celsius to Fahrenheit.\n");
    printf("Enter your choice (1, 2): ");
    scanf("%d",&choice);
 
    if(choice ==1){
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f",&fh);
        cl= (fh - 32) / 1.8;
        printf("Temperature in Celsius: %.2f\n",cl);
    }
    else if(choice==2){
        printf("Enter temperature in Celsius: ");
        scanf("%f",&cl);
        fh= (cl*1.8)+32;
        printf("Temperature in Fahrenheit: %.2f\n",fh);
    }
    else{
        printf("Invalid Choice");
    }
    return 0;
}