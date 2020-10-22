#include <stdio.h>

int main(void)
{
	int x,y,n,sum=0;
	
	printf("请输入两个整数，\n");
	printf("整数a:");   scanf("%d",&x);
	printf("整数b:");   scanf("%d",&y);
	
    if(x>y){
    	n=y;
    do{
       sum=sum+n;
	   n++;
	}
	while (n<=x);
	printf("大于等于%d小于等于%d的所有整数的和是%d。",y,x,sum); 
	}
	
	else{
		n=x;
	   do{
	   sum=sum3+n;
	   n++;
	   }
	while (n<=y);
	printf("大于等于%d小于等于%d的所有整数的和是%d。",x,y,sum); 
	}
	
	return 0;
 } 
