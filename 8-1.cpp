#include <stdio.h>
#define diff(x,y)  x-y

int main(void){
	int x, y;
	printf("������x��ֵ��");    scanf("%d", &x);
	printf("������y��ֵ��");    scanf("%d", &y);
	
	printf("x��y�Ĳ�ֵΪ��%d", diff(x,y));
	
	return 0;
	
} 
