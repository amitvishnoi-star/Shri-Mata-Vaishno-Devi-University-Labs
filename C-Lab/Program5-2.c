// Write A C program using Switch case to check entered alphabet is   vowel or consonant.
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ) {

        switch(ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("The alphabet '%c' is a Vowel.\n", ch);
                break;
            default:
                printf("The alphabet '%c' is a Consonant.\n", ch);
                break;
        }

    } else {
        printf("Error: '%c' is not a valid English alphabet.\n", ch);
        return 1;
    }

    return 0;
}