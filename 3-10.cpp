#include <stdio.h>

int main (void)
{
	int x, y, z;
	
	printf("请输入三个整数。");
	
	printf("整数A：");  scanf("%d",  &x);
	printf("整数B：");  scanf("%d",  &y);
	printf("整数C：");  scanf("%d",  &z);
	
	if  (x==y && y==z)
	  printf("三个值都相等。");
	else if  (x!=y && y!=z && x!=z)
	  printf("三个值各不相同。");
	else
	  printf("有两个值相等。"); 
	  
	return 0; 
}
