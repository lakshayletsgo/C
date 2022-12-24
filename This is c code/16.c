#include <stdio.h>
int main(){
    int a ,b,row;
 printf("Enter number of rows: ");
 scanf("%d", &row);
 for (a=row; a>=1; --a) {
 for (b=1; b<=a; ++b)
 { printf("%d ",b); }
 printf("\n");
 }
// Enter number of rows: 6
// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1




int rows, i, j, space;

 printf("Enter number of rows: ");
 scanf("%d", &rows);
 for (i=rows; i>=1; --i) {
    for (space=0; space<rows-i; ++space)
        printf(" ");
     for (j=i; j<=2*i-1; ++j)
        printf("* ");
    for (j=0; j<i-1; ++j)
        printf("* ");
 printf("\n");}

// Enter number of rows: 5
// * * * * * * * * *
//  * * * * * * *
//   * * * * *
//    * * *
//     *


}
