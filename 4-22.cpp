#include <stdio.h>
 
int main(void)
{
	int i, j;
	int a, b;
	
	printf("����������һ�������Ρ�\n");
	printf("һ�ߣ�");   scanf("%d",&a);
	printf("��һ�ߣ�");   scanf("%d",&b);
	if(b > a){
		for(i = 1; i <= a; i++ ){
			for(j = 1; j <= b; j++){
				printf("*");
			}
			printf("\n"); 
		}
	}
	else{
		for(i = 1; i <= b; i++ ){
			for(j = 1; j <= a; j++){
				printf("*");
			}
			printf("\n"); 
		}		
	}
	return 0;
} 

