//Nested loops (inner loop it starts fresh when we come from outer loop)
#include <stdio.h>
int main()
{
 int l,s;
 for (l = 1; l <= 3; l++)
 {
    for(s = 1; s <= l; s++)
         printf(" *");
    printf("\n");
 }
 return 0;}
/*  *
   * *
  * * * */ 