#include<stdio.h>

// I love Recursion

void printData(int i)
{
    if(i==0) return;
    printf("I love Recursion\n");
    printData(i-1);
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    printData(n);
    return 0;
}
