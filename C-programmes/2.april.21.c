#include <stdio.h>
struct Student
{
    char Name[10];
    int ID;
    int CGPA;
};

int main ()
{
    int i;
    struct Student Students[3];

    for(i=0; i<3; i++)
    {
        printf("Enter student %d Name, ID, CGPA:\n",i+1);
        gets(Students[i].Name);
        scanf("%d",&Students[i].ID);
        scanf("%d",&Students[i].CGPA);
        fflush(stdin);
    }
    if((Students[0].CGPA<Students[1].CGPA) && (Students[0].CGPA<Students[2].CGPA))
    {
        printf("Print student 0 Name, ID, CGPA:\n");
        printf("Name: %s\n", Students[0].Name);
        printf("ID: %d\n", Students[0].ID);
        printf("CGPA: %d\n", Students[0].CGPA);
    }
    else if((Students[1].CGPA<Students[0].CGPA) && (Students[1].CGPA<Students[2].CGPA))
    {
        printf("Print student 1 Name, ID, CGPA:\n");
        printf("Name: %s\n", Students[1].Name);
        printf("ID: %d\n", Students[1].ID);
        printf("CGPA: %d\n", Students[1].CGPA);
    }
    else
    {
        printf("Print student 2 Name, ID, CGPA:\n");
        printf("Name: %s\n", Students[2].Name);
        printf("ID: %d\n", Students[2].ID);
        printf("CGPA: %d\n", Students[2].CGPA);
    }

return 0;

}

