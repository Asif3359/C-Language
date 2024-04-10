#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;

void sort_by_area(triangle *tr, int n)
{
    double area_i, area_j;
    double p_i, p_j;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            p_i = (tr[j].a + tr[j].b + tr[j].c) / 2.0;
            p_j = (tr[j + 1].a + tr[j + 1].b + tr[j + 1].c) / 2.0;

            area_i = sqrt(p_i * (p_i - tr[j].a) * (p_i - tr[j].b) * (p_i - tr[j].c));
            area_j = sqrt(p_j * (p_j - tr[j + 1].a) * (p_j - tr[j + 1].b) * (p_j - tr[j + 1].c));

            if (area_j < area_i)
            {
                triangle temp = tr[j];
                tr[j] = tr[j + 1];
                tr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}