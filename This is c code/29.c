//Structures
#include<stdio.h>
struct Student{                     //Defining
	char name[10];
	int roll;
};                                //We can also write }E1; to declare a structure variable or struct Student <name>
void show(struct Student s1);
int main(){
	struct Student std;
	printf("\nEnter Student record: \n");
	printf("\nStudent name:\n");
	scanf("%s",std.name); //To call a variable type in a structure use name of the variable and then the .<Varible name>
	printf("\nEnter Student rollno.:\n");
	scanf("%d",&std.roll);


	show(std);
	return 0;
}
void show(struct Student st){
	printf("\nStudent name is %s",st.name);
	printf("\nroll is %d",st.roll);
}
