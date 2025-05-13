#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);


    if (r != c)
    {
        printf("This isn't a Square Matrix\n");
        return 0;
    }

    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    bool is_unit = true;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    is_unit = false;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    is_unit = false;
                }
            }
        }
    }

    if (is_unit)
    {
        printf("This is a Unit Matrix\n");
    }
    else
    {
        printf("This isn't a Unit Matrix\n");
    }

    return 0;
}
