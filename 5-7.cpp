#include <stdio.h>

#define NUMBER 4

int main(void){
	int i , n;
	int x[NUMBER];
	
	printf("���ݸ�����");   scanf("%d", &n);
	
	for(i=0;i<NUMBER;i++){
		printf("%d�ţ�",i+1);
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
