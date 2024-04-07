#include <stdio.h>
#include <stdbool.h> // for bolean data type

int main(int argc, char const *argv[])
{
    /*

    Data type
    1. Integer int      4 byte
    2. Float float      4 byte
    3. Character char   1 byte
    4. Boolean bool     1 byte
    5. Double double    8 byte

    Variable
    Variable name can be anything that Start with letter or _ (not special key word example: int , main , printf etc)
    Example
    1. int Number ;
    2. float Number2;
    3. char character;
    4. bool isRight;

    */

    int Number;  // Dealer
    Number = 10; // value assign in Variable (assign)

    float Number2 = 5.101112345; // Dealer + (assign) value assign in Variable = initialize

    char character = 'A'; // initialize
    bool isRight = true;  // initialize

    // Format specifier
    /*
    int     - %d 
    float   - %f
    char    - %c 
    double  - %lf
    */

    printf("Integer Number : %d\n", Number);
    printf("Float Number   : %0.4f\n", Number2);
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