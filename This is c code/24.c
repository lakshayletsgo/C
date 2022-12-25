//Calculator using Functions
#include <stdio.h>
#include <math.h>
void sum();             //Declaration
void diff(int,int);     //Declaration
int square();           //Return type integer   
int power(int,int);
int main()
{
    int a,b,z,ch;
 
    printf("1 is for sum, 2 is for difference, 3 is for square, 4 is power \nEnter your choice:  ");
    scanf("%d",&ch);
    switch(ch){
        case 1: sum();
                break;
        case 2: printf("Enter 2 values : ");
                scanf("%d%d",&a,&b);
                diff(a,b);
                break;
        case 3: printf("Square is %d",square());
                break;
        case 4: printf("Enter number then its power: ");
                scanf("%d%d",&a,&b);
                z = power(a,b);
                printf("%d",z);
                break;
        default : printf("yours choice is wrong");
    }
    return 0;
}
void sum(){                         //Defining
    int x,y,z;
    printf("Enter 2 values: ");
    scanf("%d%d",&x,&y);
    z = x+y;
    printf("%d is the sum",z);
}
void diff(int a,int b){
    printf("%d",a-b);
    
}
int square(){
    int a;
    printf("Enter 1 values");
    scanf("%d",&a);
    return a*a;
}
int power(int x,int y){
    return pow(x,y);
}
