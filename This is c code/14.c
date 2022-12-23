//Nested Loops Part 2
#include<stdio.h>
int main(){
 int m,n,rows;
 rows=5;
 for (m=1; m<=rows; ++m) {
 for (n=1; n<=m; ++n)
 { printf("%d ",n); }
 printf("\n");
 }
 
//  1 
//  1 2
//  1 2 3
//  1 2 3 4
//  1 2 3 4 5

int i, j;
 char input, alphabet='A';
 printf("Enter the uppercase character you want to print in last row: ");
 scanf("%c", &input);
 for (i=1; i<=(input-'A'+1); ++i) {
 for (j=1; j<=i; ++j)
 { printf("%c", alphabet); }
 ++alphabet;
 printf("\n");
}}
// Enter the uppercase character you want to print in last row: D
// A
// BB
// CCC
// DDDD