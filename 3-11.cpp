#include <stdio.h>

int main(void)
{
	int x, y, z ;
	
	printf("请输入两个整数。");
	
	printf("整数A：");  scanf("%d", &x);
	printf("整数B：");  scanf("%d", &y);
	
	if  (x>=y) 
	z=x-y;
	else
	z=y-x;
	
	if  (z<10 || z==10)
	printf("它们的差小于等于10。");
	else
	printf("它们的差大于等于11.");
	
	return 0;
}
