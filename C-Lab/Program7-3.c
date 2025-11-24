// Write A C program To display highest cost & the book name & book number Using Structures.
#include <stdio.h>
struct book
{
    char name;
    int id;
    int cost;
};
int main()
{
    struct book b[5];
    int i;
    printf("Enter Book Names , ID & Cost For 5 Books : \n ");
    for(i=0;i<5;i++)
    {
        scanf(" %c%d%d",&b[i].name,&b[i].id,&b[i].cost);
    }
    int max=b[0].cost;
    for(i=0;i<5;i++)
    {
        if(max<b[i].cost)
        max=b[i].cost;
    }
    printf("Higest Costed Books Are : ");
    for(i=0;i<5;i++)
    {
        if(max==b[i].cost)
        printf("Book Name : %c Book Id : %d Book Cost : %d \n", b[i].name,b[i].id,b[i].cost);
    }

    
       
}
