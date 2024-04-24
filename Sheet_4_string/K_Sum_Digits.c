#include<stdio.h>

int main(int argc, char const *argv[])
{
    int N ;
    scanf("%d",&N);
    getchar();

    char arr[N];
    fgets(arr, sizeof(arr)+1, stdin);

    int sum = 0 ;
    for(int i = 0 ; i< N ; i++)
    {
       sum = sum + arr[i]-'0' ;
    }
    printf("%d ",sum);
    return 0;
}
