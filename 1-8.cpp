#include  <stdio.h>

int main(void)
{
	int x,y ;
	
	puts("请输入两个整数");
	printf("整数1：");  
	scanf("%d",&x); 
	
	printf("整数2：");  
	scanf("%d",&y); 
	printf("他们的乘积是%d。\n", x*y);
	
	return 0; 
}

