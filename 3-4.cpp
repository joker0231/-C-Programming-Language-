#include <stdio.h>

int main(void)
{
    int x,y ;
    
    printf("请输入两个整数。");
	
	puts("整数A：");  scanf("%d", &x);
	puts("整数B：");  scanf("%d", &y);
	
	if(x==y)
	  puts("A和B相等。");
    	else if(x>y)
	  puts("A大于B。");
    	else if (x<y)
	  puts("A小于B。");
	return 0; 
}
