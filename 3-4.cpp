#include <stdio.h>

int main(void)
{
    int x,y ;
    
    printf("����������������");
	
	puts("����A��");  scanf("%d", &x);
	puts("����B��");  scanf("%d", &y);
	
	if(x==y)
	  puts("A��B��ȡ�");
    	else if(x>y)
	  puts("A����B��");
    	else if (x<y)
	  puts("AС��B��");
	return 0; 
}
