#include<stdio.h>

int main(void)
{   
	int x , y , sum=0 ;
	
	printf("n��ֵ��"),   scanf("%d", &x);
	
	for(y=1; y<=x; y++)
	    sum += y;
	
	printf("1��%d�ĺ�Ϊ%d", x, sum);
	 
	return 0;
    
}

