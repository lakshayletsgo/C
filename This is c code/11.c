//Printing patterns using for loops
#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=10;i++)
    printf("%d ",i);//1 2 3 4 5 6 7 8 9 10 
printf("\n");

for(i=10;i>=1;i--)
     printf("%d ",i);//10 9 8 7 6 5 4 3 2 1
 printf("\n");

for(i=1;i<=10;i=i*2)
     printf("%d ",i);//1 2 4 8 10
 printf("\n");
 

return 0;
}
