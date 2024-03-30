#include <stdio.h>
#include <stdbool.h> // for bolean data type

int main(int argc, char const *argv[])
{
    /*

    Data type
    1. Integer int 
    2. Float float 
    3. Character char
    4. Boolean bool

    Variable
    Variable name can be anything that Start with letter or _ (not special key word example: int , main , printf etc)
    Example
    1. int Number ;
    2. float Number2;
    3. char character;
    4. bool isRight;

    */

    int Number = 10;
    float Number2 = 5.10;
    char character = 'A';
    bool isRight = true;

    printf("Integer Number : %d\n", Number);
    printf("Float Number   : %f\n", Number2);
    printf("Character      : %c\n", character);

    if (isRight == true)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}