#include <stdio.h>

/* 将两个二维数组存储在三维数组中 */
void mat_add(const int a[4][3], const int b[4][3], int c[2][4][3])
{
    int i, j, k;

    for (i = 0 ; i < 2 ; i ++)
        for (j = 0 ; j < 4 ; j ++)
            for (k = 0 ; k < 3 ; k ++)
            {
                if (i == 0)
                    c[i][j][k] = a[j][k];
                else
                    c[i][j][k] = b[j][k];
            }
}

/* 显示三维数组 */
void mat_print(const int c[2][4][3])
{
    int i, j, k;

    for (i = 0 ; i < 2 ; i ++)
    {
        for (j = 0 ; j < 4 ; j ++)
        {
            for (k = 0 ; k < 3 ; k ++)
            {
                printf("%4d",c[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n\n");
    }
}

int main()
{
    int tensu1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int tensu2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
    int thr[2][4][3];

    mat_add(tensu1, tensu2, thr);
    mat_print(thr);

    return 0;
}

