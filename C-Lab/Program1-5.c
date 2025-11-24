// Write A C Programme To Find ASCII Value Of A Character.
#include <stdio.h>
int main() 
{
    char character;
    int asciiValue;
    printf("Enter a character: "); 
    scanf("%c", &character);
    asciiValue = (int)character;
    printf("The ASCII value of '%c' is: %d\n", character, asciiValue);
    return 0;
}