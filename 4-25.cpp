#include <stdio.h>
 
int main (void)
{
	int a, b, c, d;
	
	puts("����������һ�����µĽ�������");
	printf("�������м��㣺");	scanf("%d",&a);
	
	d = a;
	for(b = 1; b <= a; b++){
		for (c = 1; c < b; c++){
			printf(" ");
		}
		for (c = 0; c < 2*d-1; c++ ){
			printf("%d",b%10);
		}
		d--;
		printf("\n");			
	}
 } 

