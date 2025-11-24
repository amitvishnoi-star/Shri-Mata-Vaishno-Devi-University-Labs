/*Write a program in C to Find The marks Obtained by a Student in Five Subjects entered by user.
Do total marks, percentage and The Student gets Division based on the following criteria:
- First Division: Percentage >= 60%
- Second Division: Percentage >= 50% and < 60%
- Third Division: Percentage >= 40% and < 50%
- Fail: Percentage < 40%
*/
#include <stdio.h>
int main()
 {   int maths , science, english, hindi, social,n;
    float total, percentage;
    printf("Enter marks of five subjects (out of 100): ");
    scanf("%d %d %d %d %d", &maths, &science, &english, &hindi, &social);
    total = maths + science + english + hindi + social;
    percentage = (total / 500) * 100;
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    if (percentage >= 40){
        if(maths<40)
            printf("Result: Fail\n");
        else if(science<40)
            printf("Result: Fail\n");
        else if(english<40)
            printf("Result: Fail\n");
        else if(hindi<40)
            printf("Result: Fail\n");
        else if(social<40)
            printf("Result: Fail\n");
        else{
        printf("Result: Pass\n");
        n=1;
        }
    }
    else
        printf("Result: Fail\n");
    if(n==1){
        if(percentage>=60)
            printf("Division: First\n");
        else if(percentage>=50)
            printf("Division: Second\n");
        else if(percentage>=40)
            printf("Division: Third\n");
    }
    return 0;
}