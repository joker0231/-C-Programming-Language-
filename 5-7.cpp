#include <stdio.h>

#define NUMBER 4

int main(void){
	int i , n;
	int x[NUMBER];
	
	printf("数据个数：");   scanf("%d", &n);
	
	for(i=0;i<NUMBER;i++){
		printf("%d号：",i+1);
		scanf("%d",&x[i]);
	}
	
	printf("{");
	
    printf("%d",x[0]);
	for(i=1;i<NUMBER;i++){
		printf(",%d",x[i]);
	}  
	
	printf("}");
	
	return 0; 
}
