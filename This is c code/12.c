//More information about for loops
#include<stdio.h>
int main(){
int i,j;

for(i=1,j=2;i<=10,j<=10;i++,j=j+2)
 printf("i=%d,j=%d \n",i,j);
 
for(i=1,j=2;(i<=5)&&(j<=10);i++,j=j+2)
 printf("i=%d,j=%d \n",i,j);
 
for(i=1,j=2;(i<=5)||(j<=20);i++,j=j+2)
 printf("i=%d,j=%d \n",i,j);
 
for(i=1;i!=10;i++)
 printf("i=%d \n",i);
 return 0;
 }