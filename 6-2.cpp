#include<stdio.h>

int min(int a,int b,int c)
{
	int min = a;
	if(b<a){
		min = b;
	}
	if(c<b){
		min = c;
	}
	return min;
}
int main(void)
{
	int a ,b ,c;
	printf("请输入A的值：");	scanf("%d",&a);
	printf("请输入B的值：");	scanf("%d",&b);	
	printf("请输入C的值：");	scanf("%d",&c);	
	printf("三个数中较小的值为：%d",min(a,b,c));
    return 0;
}

