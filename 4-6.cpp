#include <stdio.h>

int main(void)
{
	int x,n=2;
	
	printf("请输入一个整数：");   scanf("%d",&x);
	
	while (n<x)
	{
    printf("%d",n);
	n+=2;
	printf("\n");
	}
	return 0;
}
