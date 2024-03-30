#include <stdio.h>

int main(int argc, char const *argv[])
{
        int Number ;
        float Number_2 ;
        char character ;

        // & - address of

        printf("Enter Integer Number :");
        scanf("%d",&Number);

        printf("Enter Float Number :");
        scanf("%f",&Number_2);

        printf("Enter character    :");
        scanf("%s",&character);

        printf("\nNumber :%d \nNumber_2 :%0.4f \nCharacter :%c",Number , Number_2, character);

    int n1, n2;
    char c;

    // for 10% 20% input and output
    printf("Enter Two Number :");

    // scanf("%d%c %d%c",&n1,&c,&n2,&c);
    
    scanf("%d%% %d%%", &n1, &n2);
    printf("Output : %d%% %d%%", n1, n2);

    // scanf("%d %d",&n1,&n2); wrong
    // printf("Output : %da %db", n1, n2);

    scanf("%da %db", &n1, &n2);
    printf("Output : %da %db", n1, n2);

    return 0;
}
