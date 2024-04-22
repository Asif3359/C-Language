#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char s1[100];
    char s2[100];

    scanf("%s %s",&s1, &s2);

    printf("%d %d\n",strlen(s1),strlen(s2));
    printf("%s%s\n",s1,s2);

    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp ;
    
    printf("%s %s\n",s1,s2);


    return 0;
}
