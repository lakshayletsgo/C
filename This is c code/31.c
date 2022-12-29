#include<stdio.h>
struct Student{
    int rno;
    int marks[50];

}s1;
int main(){
    int i , j;
    struct Student s2 = {1,20};
    printf("Rno , marks are %d\t %d\n",s2.rno,s2.marks);
    struct Student A[10];
    for(i=0;i<5;i++)
    {
        scanf("%d",&A[i].rno);
        for(j=0;j<2;j++)
        scanf("%d",&A[i].marks[j]);
    }
    return 0;
}