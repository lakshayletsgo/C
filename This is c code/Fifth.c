//Read 2 numbers from the user and use the arithematic operators
#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
    
    int a,b ;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);

    printf("the sum is : %d\n",a+b);
    printf("the diff is : %d\n",a-b);
    printf("the multiplication is : %d\n",a*b);
    printf("the division is : %d\n",a/b);
    printf("the modulus is : %d\n",a%b);
    

    return 0;
}
