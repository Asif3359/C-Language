#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char s[100];
    char sn[100];

    scanf(" %c", &ch); // Add space before %c to skip leading whitespace
    scanf("%s", s);
    scanf(" %[^\n]%*c", sn);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sn);

    return 0;
}
