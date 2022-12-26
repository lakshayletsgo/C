//Pointers 
#include<stdio.h>
int main(){
    int x =10;      //Variable
    int *p;         //Declaration
    p=&x;           //Assisgnment
    printf("%d\n",x);
    printf("%p\n",p);//Call
    printf("Value of x using pointer p is %d\n",*p); // *p --> value at address stored in p i.e. value of x
    *p = *p+5;
    printf("Value of x using pointer is %d\n",*p);
}




// 10
// 0061FF18
// Value of x using pointer p is 10
// Value of x using pointer is 15
