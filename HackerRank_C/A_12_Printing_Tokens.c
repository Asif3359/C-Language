#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    char *sentence;
    sentence = malloc(1024 * sizeof(char));
    scanf("%[^\n]", sentence);
    sentence = realloc(sentence, strlen(sentence) + 1);

    int i = 0;
    while (sentence[i] != '\0')
    {
        
        while (sentence[i] != ' ' && sentence[i] != '\0')
        {
            printf("%c", sentence[i]);
            i++;
        }
        printf("\n"); 
        if (sentence[i] == ' ')
        {
            i++; 
        }
    }

    return 0;
}
