#include <stdio.h>

int main(void)
{
    int x, y, z, min;
    
    printf("整数A：");   scanf("%d",&x);
	printf("整数B：");   scanf("%d",&y);
	printf("整数C：");   scanf("%d",&z);
	
	min = x;
	if(y< min) min=y;
	if(z< min) min=z;
	
	printf("最小的值是%d。\n", min);
	return 0; 
}
