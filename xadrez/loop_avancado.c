#include <stdio.h>
int main()
{

    for (int i = 0, j = 10; i < j; i++,j--)
    {
        printf("i = %d, j = %d \n", i,j);
        
    }
    for (int i = 0, j = 10; i < 5 && j>5; i++,j--)
    {
        printf("i = %d, j = %d \n", i,j);
        
    }

    for (int i = 0; i < 100; i+=(i%2 ==0)? 2:1)
    {
        printf("i = %d\n", i);
        
    }

    return 0;
}