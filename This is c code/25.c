//Printing fibonacci series using functions(Recursive Functions)
#include<stdio.h>
int fibonacci(int);//Defining
int main(){
    int n;
    printf("Enter number of values you want to print: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    printf(" %d\t",fibonacci(i)); //Usage
    return 0;
}
int fibonacci(int i){   //Declaration
    if(i==0){
        return 0; }
    if(i==1){
        return 1;}
    return fibonacci(i-1) + fibonacci(i-2);//Recursive call
}
