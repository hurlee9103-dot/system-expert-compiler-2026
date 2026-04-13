#include <stdio.h>

int a[25][25];

int main()
{
    int i;
    for (i = 0; i < 25; i++)
    {
        a[i][0] = 0;
        printf("%d %d\n", i, a[i][0]);
    }
    return 0;
}
