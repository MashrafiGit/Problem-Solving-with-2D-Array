#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (r != c)
    {
        printf("This isn't a Square Matrix\n");
        return 0;
    }

    bool is_scalar = true;
    int diagonal_value = a[0][0]; 
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                if (a[i][j] != diagonal_value)
                {
                    is_scalar = false;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    is_scalar = false;
                }
            }
        }
    }

    if (is_scalar)
    {
        printf("This is Scalar Matrix\n");
    }
    else
    {
        printf("This isn't Scalar Matrix\n");
    }

    return 0;
}
