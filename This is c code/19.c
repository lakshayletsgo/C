//Read and print first and last name
#include<string.h>
#include<stdio.h>
int main(){
    char firstname[20], lastname[20];
    printf("Enter your firstname: ");
    gets(firstname );
    printf("Enter your lastname: ");
    gets(lastname);
    strcat(firstname,lastname);
    puts(firstname);
    return 0 ;
}


// Enter your firstname: Lakshay
// Enter your lastname: Goel
// LakshayGoel