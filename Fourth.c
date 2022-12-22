//size of datatypes using size of function
#include<stdio.h>
#include<limits.h>
int main(){
    
    printf("Size of INT is %ld bytes\n", sizeof(int));
    printf("Size of FLOAT is %ld bytes\n", sizeof(float));
    printf("Size of CHAR is %ld bytes\n", sizeof(char));
    printf("Size of DOUBLE is %ld bytes\n", sizeof(double));

// Ranges of Datatypes    
    printf("min range of int is %d\n",INT_MIN);
    printf("max range of int is %d\n",INT_MAX);
    printf("min range of short is %d\n",SHRT_MIN);
    printf("max range of short is %d\n",SHRT_MAX);
    printf("min range of char is %d\n",CHAR_MIN);
    printf("max range of char is %d",CHAR_MAX);

    return 0;
}
