//Nested Loops Part 3
#include<stdio.h>
int main(){
int x, y, row;
 printf("Enter number of rows: ");
 scanf("%d", &row);
 for (x=row; x>=1; --x) {
 for (y=1; y<=x; ++y)
 { printf("* "); }
 printf("\n");
 }


// Enter number of rows: 5
// * * * * *
// * * * *
// * * *
// * *
// *



 int o, spaces, p=0,rs;
 printf("Enter number of rows: ");
 scanf("%d", &rs);
 for (o=1; o<=rs; ++o,p=0) {
 for (spaces=1; spaces<=rs-o; ++spaces)
 { printf(" "); }
 while (p!=2*o-1) {
 printf("* ");
 ++p;
 }
 printf("\n");
 } 

//  Enter number of rows: 5
//     *
//    * * *
//   * * * * *
//  * * * * * * *
// * * * * * * * * * 






int i, space, rows, k=0, count=0, count1=0;
 printf("Enter number of rows: ");
 scanf("%d", &rows);
 for (i=1; i<=rows; ++i) {
 for (space=1; space<=rows-i; ++space) {
 printf("   ");
 ++count;
 }
 while (k!=2*i-1) {
 if (count <= rows-1)
 { printf("   %d ", i+k);
 ++count;
 }
 else {
 ++count1;
 printf("  %d ", (i+k-2*count1));
 }
 ++k;
 }
 count1=count=k=0;
 printf("\n");
 }

//  Enter number of rows: 5
//                1
//             2    3   2
//          3    4    5   4   3
//       4    5    6    7   6   5   4
//    5    6    7    8    9   8   7   6   5
}

