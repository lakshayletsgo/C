#include<stdio.h>
     main()
{
struct employee
{
char name[25];
int age;
float bs;
};
struct employee e;
e.name = "Hacker" ;
e.age = 25 ;
printf ("%s %d", e.name, e.age); }
