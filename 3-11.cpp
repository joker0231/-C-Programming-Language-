#include <stdio.h>

int main(void)
{
	int x, y, z ;
	
	printf("����������������");
	
	printf("����A��");  scanf("%d", &x);
	printf("����B��");  scanf("%d", &y);
	
	if  (x>=y) 
	z=x-y;
	else
	z=y-x;
	
	if  (z<10 || z==10)
	printf("���ǵĲ�С�ڵ���10��");
	else
	printf("���ǵĲ���ڵ���11.");
	
	return 0;
}
