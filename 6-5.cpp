#include <stdio.h>

int sumup (int n){
	int i  , sum=0;
	for(i=1 ; i<=n ; i++)
	    sum+=i;
    return sum;
} 

int main(void){
	int x;
	
	printf("������һ��������");    scanf("%d", &x);
	printf("1��%d�����������ĺ�Ϊ%d��", x, sumup(x));
	
	return 0;
	
}
