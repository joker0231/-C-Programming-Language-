#include<stdio.h>

int main(void)
{   
	int x , y , sum=0 ;
	
	printf("n的值："),   scanf("%d", &x);
	
	for(y=1; y<=x; y++)
	    sum += y;
	
	printf("1到%d的和为%d", x, sum);
	 
	return 0;
    
}

