//Variables 
#include<stdio.h>
int main(){
    int a,b; //declaration
    a =10;//assignment
    printf("Value of a is %d\n",a);
    
    b = 20;//assignment
    printf("New Value of b is %d\n", b);

//address of variables

    
    int c=10,d=20;
    printf("address of a is %p\n",&c);	//address of a
    printf("address of b is %p",&d);	//%p is format specifier of printing addresses
    return 0;
}
