//Functions
#include<string.h>
#include<stdio.h>
void display(); //declaration       void--> is the return type
int sum();      //declaration       
void area(int, int);//declaration   int --> is the input type
int volume(int);//declaration
int main(){
    int x,avg,y =10,z;
    display();
    x = sum();
    printf("%d is the sum\n",sum());
    avg = x/2;
    printf("%d is the average\n",avg);
    area(5,4);
    printf("%d is the volume\n",volume(y));
    return 0 ;
}
void display(){                 //Defining
    printf("Hello\n");
}
int sum(){                      //Defining
    int a = 5,b = 10;
    return(a+b);
}
void area(int l,int b){
    printf("%d is the area\n",l*b);
    
}
int volume(int a){
    return(a*a*a);
}

// Hello
// 15 is the sum
// 7 is the average
// 20 is the area
// 1000 is the volume