#include <stdio.h>

#define NUMBER 80

int main(void){
	int i, j ;
	int n;
	int x[NUMBER];
	int bunpu[11]={0};
	
	printf("������ѧ��������"); 
	
	do{
		scanf("%d", &n);
		if(n<1 || n>80){
		 printf("������1~%d������", n);
		}
	}while (n<1 || n>80);
	
	printf("������%d�˵ķ�����\n", n);
	
	for(i=0; i<n; i++){
		printf("%2d��:", i+1);
		do{
			scanf("%d",&x[i]);
			if(x[i]<0||x[i]>100){
				printf("\a������1~100������");
			} 
			}while(x[i]<0||x[i]>100);
		bunpu[x[i]/10]++;
		}
	
	printf("\n---�ֽ�ͼ---\n");
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
	

