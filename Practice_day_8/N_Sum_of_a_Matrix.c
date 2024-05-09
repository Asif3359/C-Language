#include <stdio.h>

int main(int argc, char const *argv[])
{
    int r, c;
    scanf("%d %d", &r, &c);

    int arr_A[r][c];
    int arr_B[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            scanf("%d",&arr_A[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            scanf("%d",&arr_B[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            printf("%d ",arr_A[i][j]+arr_B[i][j]);
        }
        printf("\n");
    }

    return 0;
}