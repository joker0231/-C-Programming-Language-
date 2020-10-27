#include <stdio.h>
 
int main(void)
{
	int i, j;
	int a, b;
	
	printf("让我们来画一个长方形。\n");
	printf("一边：");   scanf("%d",&a);
	printf("另一边：");   scanf("%d",&b);
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

