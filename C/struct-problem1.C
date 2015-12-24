/*
WAP to create a structure  for student
containing roll no name, class, marks in maths ,chem, english.
Input a student details and print it
*/

#include<stdio.h>

struct Student
{
    int roll,studentClass;
    float maths,chem,eng;
    char name[15];
};
typedef struct Student student;

int main()
{
    student stud1;
    printf("Enter roll,class,marks in maths chem english and name :-");
    scanf("%d %d %f %f %f %s",&stud1.roll,&stud1.studentClass,&stud1.maths
          ,&stud1.chem,&stud1.eng,&stud1.name);
    printf("\nStudent Details:- \n");
    printf("Name %s\nClass %d\nRoll %d\nMaths %.2f\nChem %.2f\nEnglish %.2f"
           ,stud1.name,stud1.studentClass,stud1.roll,stud1.maths
          ,stud1.chem,stud1.eng);
    return 0;
}







