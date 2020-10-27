#include <stdio.h>

#define NUMBER 80

int main(void){
	int i, j ;
	int n;
	int x[NUMBER];
	int bunpu[11]={0};
	
	printf("请输入学生人数："); 
	
	do{
		scanf("%d", &n);
		if(n<1 || n>80){
		 printf("请输入1~%d的数：", n);
		}
	}while (n<1 || n>80);
	
	printf("请输入%d人的分数。\n", n);
	
	for(i=0; i<n; i++){
		printf("%2d号:", i+1);
		do{
			scanf("%d",&x[i]);
			if(x[i]<0||x[i]>100){
				printf("\a请输入1~100的数：");
			} 
			}while(x[i]<0||x[i]>100);
		bunpu[x[i]/10]++;
		}
	
	printf("\n---分界图---\n");
	for(i=0;i<=9; i++){
	    printf("%2d~%2d:",i*10, i*10+9);
	    for(j=0; j<bunpu[i];j++)
	    	putchar('*');
	    putchar('\n');
	}
		
		printf("100:");
		for(j=0; j<bunpu[10];j++)
		    putchar('*');
	return 0;
	}	    
	

