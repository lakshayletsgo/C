//Calculator Using Functions
#include<stdio.h>
int sum(int ,int);
int difference(int,int);
int product(int,int);
int division(int,int);
int main(){
    int a,b;
    int x;
    printf("1 is for addition; 2 is for subtraction; 3 is for product and 4 is for division\n");
    printf("Enter the 2 number: ");
    scanf("%d%d",&a,&b);
    printf("Enter your choice: ");
    scanf("%d",&x);
    switch(x){
        case 1:
            printf("%d",sum(a,b));
            break;
        case 2:
            printf("%d",difference(a,b));
            break;
        case 3:
            printf("%d",product(a,b));
            break;
        case 4:
            printf("%d",division(a,b));
            break;
        default: printf("You have entered wrong choice");
    }
    return 0 ;
}
int sum(int a,int b){
    return a+b;
}
int difference(int a,int b){
    return a-b;
}
int product(int a,int b){
    return a*b;
}
int division(int a,int b){
    return a/b;
}

