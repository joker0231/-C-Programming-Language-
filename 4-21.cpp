#include <stdio.h>

int main(void)
{
	int x, y ,z;
	
	printf("����һ��������");
	printf("�������м��㣺");    scanf("%d", &x);
	
	for(y=1; y<=x; y++){
		for(z=1; z<=x; z++)
		   printf("*");
		printf("\n");
	} 
	
	return 0;
}
