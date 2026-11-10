#include <stdio.h>

// start your solution

void printReverse(char *s)
{
    if (*s == '\0')
        return;

    printReverse(s + 1);

    printf("%c", *s);
}

// end your solution

int main()
{
    char s[1005];

    scanf("%1000s", s);

    printReverse(s);
    printf("\n");

    return 0;
}
