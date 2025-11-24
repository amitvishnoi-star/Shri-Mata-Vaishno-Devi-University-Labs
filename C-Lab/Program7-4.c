// Write A C Program to Create a Record Of 5 Students provided Details name, roll no. , fees paid 
// and Mobile Nummber and Display it.
#include <stdio.h>
struct student
{
    char name;
    int rollno;
    int feespaid;
    int mobno;
};
int main()
{
    struct student s[5];
    int i;
    printf("Enter name, roll no., fees paid, and mobile number for 5 students:\n");
    for(i=0;i<5;i++)
    {
        scanf(" %c%d%d%d",&s[i].name,&s[i].rollno,&s[i].feespaid,&s[i].mobno);
    }
    printf("Entered Student Record is : \n");
    for(i=0;i<5;i++)
    {
        printf("Name: %c, Roll No: %d, Fees Paid: %d, Mobile No: %d\n", s[i].name, s[i].rollno, s[i].feespaid, s[i].mobno);
    }
}