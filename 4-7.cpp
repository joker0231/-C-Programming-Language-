#include<stdio.h>

int main(void)
{   
	int no;
	
	printf("������һ����������");
	scanf("%d",&no);
	
	int i = 2;
	while(i<no)
	{
		printf("%d ",i);
		i *=2;
	}
	
    return 0;
}

