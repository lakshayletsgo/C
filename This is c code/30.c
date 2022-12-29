#include<string.h>
#include<stdio.h>
int main(){
    char arrr[20],*ptr;
    gets(arrr);
    ptr = &arrr[0];
    for(int i=0;i<=20;i++){
        if(*ptr==' ')
            break;
        ptr++;
       
    }
    for(int i=0;i<=20;i++){

    printf("%c",*(ptr++));
    }



    return 0;
}