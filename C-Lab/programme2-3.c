// Write A C programme To Compute 5 Subjects Marks Display Percentage , Total Marks And Pass or Fail.
#include <stdio.h>
int main()
 {   int maths , science, english, hindi, social;
    float total, percentage;
    printf("Enter marks of five subjects (out of 100): ");
    scanf("%d %d %d %d %d", &maths, &science, &english, &hindi, &social);
    total = maths + science + english + hindi + social;
    percentage = (total / 500) * 100;
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    if (percentage >= 35){
        if(maths<35)
            printf("Result: Fail\n");
        else if(science<35)
            printf("Result: Fail\n");
        else if(english<35)
            printf("Result: Fail\n");
        else if(hindi<35)
            printf("Result: Fail\n");
        else if(social<35)
            printf("Result: Fail\n");
        else
        printf("Result: Pass\n");
    }
    else
        printf("Result: Fail\n");
}