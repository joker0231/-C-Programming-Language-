#include <stdio.h>

int main()
{
    float x, y, sum1, sum2;
    int i;
    sum1 = sum2 = 0.0;

    for ( x = 0.0 ; x <= 1.0 ; x += 0.01 )
    {
        sum1 += x;
    }

    for ( i = 0 ; i <= 100 ; i++)
    {
        y = i / 100.0;
        sum2 += y;
    }

    printf("7-11�е�����ֵ�ĺ�Ϊ%f\n",sum1);
    printf("7-12�е�����ֵ�ĺ�Ϊ%f",sum2);
    
    return 0;
}

