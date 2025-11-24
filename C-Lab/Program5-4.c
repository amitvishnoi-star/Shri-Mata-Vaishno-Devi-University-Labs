// Write A C Program To Perform Sum of elements of 1-D array.
#include <stdio.h>
int main()
{
    int a[10],i;
    printf("Enter The Elements of Array : ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    int sum=0;
    for(i=0;i<10;i++){
        sum+=a[i];
    }
    printf("Sum Of elements : %d\n",sum);
    return 0;

}