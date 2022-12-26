#include<stdio.h>
int main(){
    char x ='A';
    char *ptr;                  //Declaration
    float y=20.4f;
    float *ptr1;
    double d = 35.2f;
    double *ptr2;
    ptr = &x;                   //Assisgnment
    ptr1 = &y;                  
    ptr2 = &d;
    printf("%ld\t%ld\t%ld",sizeof(ptr),sizeof(ptr1),sizeof(ptr2));
    }




// 4       4       4