#include <stdio.h>

unsigned rrotate(unsigned x, int n){
	return x >> n;
}

unsigned lrotate(unsigned x, int n)
{
    return x << n;
}

int main(void){
	int x, n ; 
	
	printf("请输入无符号整数：");
    scanf("%u",&x);
    printf("请输入位移的位数：");
    scanf("%d",&n);
	
	printf("%d右移后的值为%d。", x, rrotate(x , n));
	printf("%d左移后的值为%d。", x , lrotate(x , n));
	
	return 0;
	
}
