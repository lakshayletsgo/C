/*
int a ,b;
 printf("Enter number of rows: ");
 scanf("%d", &rows);
 for (a=rows; a>=1; --a) {
 for (b=1; b<=a; ++b)
 { printf("%d ",b); }
 printf("\n");
 }


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
 printf("\n");
 }
int rows, coef=1, space, i, j;
 printf("Enter number of rows: ");
 scanf("%d", &rows);
 for (i=0; i<rows; i++) {
 for (space=1; space <= rows-i; space++)
 printf(" ");
 for (j=0; j<=i; j++) {
 if (j==0 || i==0)
 coef = 1;
 else
 coef=coef*(i-j+1)/j;
 printf("%4d", coef);
 }
 printf("\n");
 }
 
int rows, i, j, number= 1;
 printf("Enter number of rows: ");
 scanf("%d", &rows);
 for (i=1; i<=rows; i++) {
 for (j=1; j<=i; ++j)
 { printf("%d ", number);
 ++number;
 }
 printf("\n");
 }
 
}*/