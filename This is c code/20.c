//How strcmp command works 
#include<string.h>
#include<stdio.h>
int main(){
    char A [10];        //Declaration
    char B[10];
    gets(A);            //Reading value
    gets(B);
    if(strcmp(A,B)==0){
        printf("Both String are equal.");
    }else if(strcmp(A,B)<0){
        printf("%s is smaller.",A);
    }else{
        printf("%s is smaller.",B);
    }
    return 0 ;
}



// lakshay
// Lakshay
// Lakshay is smaller.