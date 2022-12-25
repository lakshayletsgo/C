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


// Enter number of values you want to print: 23
//  0       1       1       2       3       5       8       13      21      34      55      89      144     233     377         61      987     1597    2584    4181    6765    10946   17711   28657