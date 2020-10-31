#include <stdio.h>
#include <math.h>

int main(void){
	unsigned x;
	int n;
	int i,j;
	
	printf("请输入无符号整数：");
    scanf("%u",&x);
    printf("请输入位移的位数：");
    scanf("%d",&n);
    
    printf("左位移\n") ;
    x << n==i;
    if(i=x * pow(2,n)){
    	printf("相等\n");
	}
	else printf("不相等\n");
	
	printf("右位移\n");
	x >> n==j;
    if(j=x / pow(2,n)){
    	printf("相等\n");
	}
	else printf("不相等\n");
	
	return 0;
} 
