#include <stdio.h>
#include <string.h>

int main() {
    char S1[21], S2[21];

    scanf("%s %s", S1, S2);

    int lenS1 = strlen(S1);
    int lenS2 = strlen(S2);

    int i;

    for (i = 0; i < lenS1 && i < lenS2; i++) 
    {
        if (S1[i] < S2[i]) 
        {
            printf("%s\n", S1);
            return 0;
        }
        else if (S2[i] < S1[i])
        {
            printf("%s\n", S2);
            return 0;
        }
    }

    if (lenS1 < lenS2) 
    {
        printf("%s\n", S1);
    }
    else if (lenS2 < lenS1)
    {
        printf("%s\n", S2);
    } 
    else
    {
        printf("%s\n", S1);
    }

    return 0;
}
