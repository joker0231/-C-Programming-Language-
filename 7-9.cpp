#include <stdio.h>
#include <math.h>
 
int main()
{    int x;
    printf("请输入一个数作为正方形的面积：");    scanf("%d" ,&x );
	
	printf("则该正方形的边长为：%f",  sqrt(x));     
    return 0;
}
