#include<stdio.h>
#include<string.h>

struct student{
    char name[25];
    char roll_no[10];
    int semester_no;
}student1;

int main(void)
{
    struct student student2, student3 = {"Alok", "17MS345", 4}, student4;
	strcpy(student1.name, "Kripa");
    strcpy(student1.roll_no, "F0172");
    student1.semester_no = 5;

    student4 = student1;//Copy

    printf("Please input name, roll no and semester no below:\n");
    scanf("%s %s %d", student2.name, student2.roll_no, &student2.semester_no);


    printf("Student 1 record: %s %s %d\n", student1.name, student1.roll_no, student1.semester_no);
    printf("Student 2 record: %s %s %d\n", student2.name, student2.roll_no, student2.semester_no);
    printf("Student 3 record: %s %s %d\n", student3.name, student3.roll_no, student3.semester_no);
    printf("Student 4 record: %s %s %d\n", student4.name, student4.roll_no, student4.semester_no);

    //printf("%lu %lu\n", sizeof(student1), sizeof(student2));

	return 0;
}
