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
	printf("������A��ֵ��");	scanf("%d",&a);
	printf("������B��ֵ��");	scanf("%d",&b);	
	printf("������C��ֵ��");	scanf("%d",&c);	
	printf("�������н�С��ֵΪ��%d",min(a,b,c));
    return 0;
}

