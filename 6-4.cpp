#include<stdio.h>

int sqr(int x)
{
	return x*x;
}

int pow4 (int x)
{
	return sqr(x)*sqr(x);
}
int main(void)
{
	int a ;
	printf("请输入A的值：");	scanf("%d",&a);
	printf("该值的四次幂为：%d",pow4 (a));
    return 0;
}


