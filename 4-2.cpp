#include <stdio.h>

int main(void)
{
	int x,y,n,sum=0;
	
	printf("����������������\n");
	printf("����a:");   scanf("%d",&x);
	printf("����b:");   scanf("%d",&y);
	
    if(x>y){
    	n=y;
    do{
       sum=sum+n;
	   n++;
	}
	while (n<=x);
	printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d��",y,x,sum); 
	}
	
	else{
		n=x;
	   do{
	   sum=sum3+n;
	   n++;
	   }
	while (n<=y);
	printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d��",x,y,sum); 
	}
	
	return 0;
 } 
