#include <stdio.h>

void put_count()
{
    static int number;
    number ++;
    printf("put_count:��%d��\n",number);
}

int main()
{
    put_count();
    put_count();
    put_count();

    return 0;
}

