#include <stdio.h>
#include <string.h>

int countVowel(char *str, int i)
{
    if (str[i] == '\0')
        return 0;

    int count = countVowel(str, i + 1);

    if (str[i] >= 'A' && str[i] <= 'Z')
    {
        str[i] = str[i] + 32;
    }
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}

int main(int argc, char const *argv[])
{
    char str[250];
    fgets(str, 250, stdin);
    getchar();

    int vowel = countVowel(str, 0);

    printf("%d\n", vowel);

    return 0;
}
