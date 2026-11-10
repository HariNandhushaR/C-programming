#include <stdio.h>
#include <string.h>

void compressMessage(char s[])
{
    int i, j = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (i == 0 || s[i] != s[i - 1])
        {
            s[j++] = s[i];
        }
    }

    s[j] = '\0';
}

int main()
{
    char s[1001];

    scanf("%1000s", s);

    compressMessage(s);

    printf("%s", s);

    return 0;
}
