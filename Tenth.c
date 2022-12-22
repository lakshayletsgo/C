//To check whether a character is alphabet or not
#include<stdio.h>
int main(){
    char alphabet;
    printf("Enter the character : ");
    scanf("%c",&alphabet);
    if((alphabet>='a'&&alphabet<='z')||(alphabet >='A'&& alphabet<='Z')){
        printf("It is an alphabet");
    }else{
        printf("It is not an alphabet");
    }    
    return 0;
}
