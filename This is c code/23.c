//FInding the greatest of 3 numbers using functions 
#include<stdio.h>
void compare(int,int,int); //Declaration
int main(){
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    compare(a,b,c);         //Usage
    return 0 ;
}
void compare(int a,int b,int c){
    if(a>b&&a>c){
        printf("%d is greatest\n",a);
    }else if(b>a&&b>c){
        printf("%d is greatest\n",b);
    }else{
        printf("%d is greatest\n",c);
    }
}

// Enter 3 numbers: 8
// 85
// 56
// 85 is greatest