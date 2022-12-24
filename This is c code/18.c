//Char arrays	
#include<string.h>
#include<stdio.h>
int main(){
    char A[10],B[10];   //Declaration
    gets(A);            //Reading a value
    puts(A);            //Printing the value
    strcpy(B,A);        //Coping the value of A to B
    printf("%s\n",B);   //Printing B
    int x = strlen(B);  //Length of B array
    printf("%d",x);     //Printing the length
    return 0 ;

}



// sample
// sample
// sample
// 6