#include  <stdio.h>

int min (int a, int b){
    int min = a;
    if(b<min) min = b;
    
    return min;
}

int main(void){
	int a, b;
	
	printf("请输入A的值：");	scanf("%d",&a);
	printf("请输入B的值：");	scanf("%d",&b);	
	printf("A和B中较小的值为：%d",min(a,b));
    return 0;
}
