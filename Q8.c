#include<stdio.h>

struct Student
{
    char name[20];
    char rollNo[20];
    int marks;
};

void acceptStudent(struct Student *str);
void displayStudent(struct Student *str);

void acceptStudent(struct Student *str)
{
    printf("Enter Student name: ");
    gets(str->name);
    printf("Enter Student Roll No: ");
    gets(str->rollNo);
    printf("Enter Student Total marks: ");
    scanf("%d",&(str->marks));
}

void displayStudent(struct Student *str)
{
    printf("\nStudent name is: %s\n",str->name);
    printf("Student Roll No is: %s\n",str->rollNo);
    printf("Student Total marks is: %d\n",str->marks);
}

int main()
{
    struct Student ptr;
    struct Student *str=&ptr;
    acceptStudent(str);
    displayStudent(str);
    return 0;
}
