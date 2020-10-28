#include <stdio.h>

int cube(int x){
	return x*x*x;
} 

int main(void){
	int x;
	
	printf("请输入一个整数");
	printf("整数x：");  scanf("%d", &x);
	printf("x的立方为：%d", cube(x));
	
	return 0;
}
