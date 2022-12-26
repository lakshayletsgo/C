//To find which two are identical.
#include<stdio.h>
int main(){
    int number[10];
    int *ptr = number;
    printf("number[5] = %d\n",number[5]);  //6422356
    printf("*(ptr+5) = %d\n",*(ptr+5));     //6422356
    printf("*ptr+5 = %d\n",*ptr+5);         //-507106850
    printf("((*ptr)+5) = %d\n",((*ptr)+5)); //-507106850
}
