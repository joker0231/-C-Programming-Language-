#include<stdio.h>

int main(void)
{   
	int no , n=0;
	
	do{
		printf("������һ����������");
		scanf("%d",&no);
		if (no <= 0){
			puts("\a�벻Ҫ�������������");
		} 
	}while(no <= 0);
	
	printf("%d��λ���ǣ�",no);
	while(no > 0){
		no /= 10;
		n++ ;
	} 
	printf("%d",n);
    puts("��");
	return 0;
    
}

