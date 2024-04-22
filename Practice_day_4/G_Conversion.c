#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char st[100000+1];
    fgets(st, sizeof(st), stdin); 
    
    int len = strlen(st);

    for(int i = 0; i<len ; i++)
    {
        if(st[i] == ',') 
        {
            st[i] = ' ';
        }
        else if(st[i] >= 'a' && st[i] <='z')
        {
            st[i]= st[i]-32;
        }
        else if (st[i] >= 'A' && st[i] <='Z')
        {
            st[i]= st[i]+32;
        }
    }
    for(int i = 0;  i<len; i++)
    {
        printf("%c", st[i]); 
    }
    return 0;
}
