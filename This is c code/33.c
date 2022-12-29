//Calculating area and perimetre using functions
#include<stdio.h>
#include<math.h>
int area(int,int,int);
int perimetre(int,int,int);

int main(){
    int s1,b,s2;
    int x;
    printf("1 is for area and 2 is for perimetre\n");
    printf("Enter the 3 side: \n");
    printf("side 1 - ");
    scanf("%d",&s1);
    printf("base - ");
    scanf("%d",&b);
    printf("side 2 - ");
    scanf("%d",&s2);
    printf("Enter your choice: ");
    scanf("%d",&x);
    switch(x){
        case 1:
            printf("%d",area(s1,b,s2));
            break;
        case 2:
            printf("%d",perimetre(s1,b,s2));
            break;
        default: printf("You have entered wrong choice");
    }
    return 0 ;
}
int area(int s1 ,int b,int s2){
    int a= 0.5*(s1+b+s2);
    int s = sqrt(a*(a-s1)*(a-b)*(a-s2));
    return s;
    
}
int perimetre(int a,int b,int c){
    return a+b+c;
}
