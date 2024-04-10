#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *sentence;
    sentence = malloc(1024 * sizeof(char));
    scanf("%[^\n]", sentence);
    sentence = realloc(sentence, strlen(sentence) + 1);

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 0;
    }

    int i = 0;
    while (sentence[i] != '\0')
    {

        if (sentence[i] >= '0' && sentence[i] <= '9')
        {

            arr[sentence[i]-'0']++;
        }
        i++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    free(sentence);

    return 0;
}
