#include <stdio.h>
#include <stdlib.h>

#define NUMBER 5
int main(void)
{
    int x,i, a[NUMBER] , b[20]={1,2,3,4,5};

    for(i=0 ; i<5 ; i++)
        b[i]+=3;

    for(i=0 ;i<5 ; i++)
        printf("第%d组数值：%d\n" , i+1 , b[i]);

    return 0;
}
