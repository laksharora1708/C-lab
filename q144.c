//Q144: Write a function that accepts a structure as parameter and prints its members.//

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include<stdio.h>
struct student{
    char name[20];
    int roll_no;
    int marks;
};
void print_student_info(struct student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}
int main() {
    struct student s1 = {"Neha", 104, 92};
    print_student_info(s1);
    return 0;
}