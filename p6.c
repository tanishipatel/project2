#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        int spaces = (5 - i) * 2;
        for (int s = 1; s <= spaces; s++)
        {
            printf(" ");
        }

        if (i != 5)
        {
            for (int j = i; j >= 1; j--)
            {
                printf("%d", j);
            }
        }
        else
        {
            for (int j = i; j >= 1; j--)
            {
                printf("%d", j);
            }
        }

        printf("\n");
    }

    return 0;
}
    
