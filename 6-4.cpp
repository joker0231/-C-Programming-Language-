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
	printf("������A��ֵ��");	scanf("%d",&a);
	printf("��ֵ���Ĵ���Ϊ��%d",pow4 (a));
    return 0;
}


