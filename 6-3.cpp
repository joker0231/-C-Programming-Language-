#include <stdio.h>

int cube(int x){
	return x*x*x;
} 

int main(void){
	int x;
	
	printf("������һ������");
	printf("����x��");  scanf("%d", &x);
	printf("x������Ϊ��%d", cube(x));
	
	return 0;
}
