#include <stdio.h>
int main()
{



    for (int i = 35; i <= 60; i++)
    {

        for (int j = 87; j <= 95; j++)
        {
            for (int k = 1; k <= 10; k++)
            {
                printf("%d * %d / %d = %d\n", i, j, k, i * j / k);
            }
        }
    }

    return 0;
}