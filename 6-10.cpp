#include<stdio.h>

#define NUMBER 5
void rev_intary(int v1[], const int v2[],int n){
	int i , tem;
	
	for(i=0; i<=n/2 ; i++){
	    tem=v2[i];
	    v1[i]=v2[n-i-1];
	    v1[n-i-1]=tem;
	}
	    
}

int main(void){
	int i , j ;
	int n1[NUMBER];
	int n2[NUMBER];
	
	printf("请输入%d个数：\n", NUMBER);
	for(i=0;i<NUMBER;i++){
		printf("第%d个数：", i+1);   scanf("%d", &n2[i]);
	}
	
    printf("该数组倒序:\n");	
	rev_intary(n1, n2, NUMBER);
	for(j=0 ; j<NUMBER ; j++){
	    printf("%d\n" , n1[j]);
	}
	return 0 ;
}
