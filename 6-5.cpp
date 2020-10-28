#include <stdio.h>

int sumup (int n){
	int i  , sum=0;
	for(i=1 ; i<=n ; i++)
	    sum+=i;
    return sum;
} 

int main(void){
	int x;
	
	printf("请输入一个整数：");    scanf("%d", &x);
	printf("1到%d的所有整数的和为%d。", x, sumup(x));
	
	return 0;
	
}
