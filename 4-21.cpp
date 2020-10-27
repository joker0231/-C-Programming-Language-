#include <stdio.h>

int main(void)
{
	int x, y ,z;
	
	printf("生成一个正方形");
	printf("正方形有几层：");    scanf("%d", &x);
	
	for(y=1; y<=x; y++){
		for(z=1; z<=x; z++)
		   printf("*");
		printf("\n");
	} 
	
	return 0;
}
