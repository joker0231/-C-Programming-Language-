#include<stdio.h>

int main(void)
{   
	int x, y ;
	
	printf("������һ��������");   scanf("%d", &x);
	
	for(y=1; y<=x; y++)
	   printf("%d", y%10);

	
	return 0;
    
}

