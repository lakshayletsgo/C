//Printing percentage of a student from the marks given by the user
#include <stdio.h>
int main()
{
    int marks[5];
    int i, s = 0;
    printf("Enter Marks of 5 subjects: ");
    for(i=0;i<5;i++){
        scanf("%d",&marks[i]);
        
    }
    for(i=0;i<5;i++){
        s = s+marks[i]; // adding marks to the s variable
    }
    double avg = s/5;
    printf("%lf is percentage",avg);

    return 0;}

//     Enter Marks of 5 subjects: 87
//      89
//      69
//      65
//      39
//      69.000000 is percentage
