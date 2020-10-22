#include<stdio.h>

int main(void)
{   
	int no;
	
	printf("请输入一个正整数：");
	scanf("%d",&no);
	
	int i = 2;
	while(i<no)
	{
		printf("%d ",i);
		i *=2;
	}
	
    return 0;
}

