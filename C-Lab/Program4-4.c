// Write A c programme To check Wether number is Armstrong Number or not.
#include <stdio.h>
#include <math.h>
int main()
{
    int num, ori_n;
    int rem;
    int n = 0; 
    int result = 0; 

    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("%d is not considered a positive Armstrong number.\n", num);
        return 0;
    }
    ori_n = num;
    int temp = num;

    while (temp != 0) {
        temp /= 10;
        n++;
    }

    if (n == 0) {
        n = 1;
    }

    temp = ori_n; 
    while (temp != 0) {
        rem = temp % 10;
        result += round(pow(rem, n));

        temp /= 10; }
    if (result == ori_n) {
        printf("%d is an Armstrong number .\n",ori_n);
    } else {
        printf("%d is NOT an Armstrong number .\n", ori_n);
    }return 0;
}