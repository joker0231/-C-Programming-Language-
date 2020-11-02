#include <stdio.h>
#define diff(x,y)  x-y

int main(void){
	int x, y;
	printf("请输入x的值：");    scanf("%d", &x);
	printf("请输入y的值：");    scanf("%d", &y);
	
	printf("x与y的差值为：%d", diff(x,y));
	
	return 0;
	
} 
