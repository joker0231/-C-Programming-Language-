#include  <stdio.h>

int main(void)
{
	int x,y,z;
	
	puts("请输入三个整数。");
	printf("整数1：");  
	scanf("%d",&x); 
	
	printf("整数2：");  
	scanf("%d",&y); 
	
		
	printf("整数3：");  
	scanf("%d",&z); 
	printf("他们的和是%d。\n", x+y+z);
	
	return 0; 
}

