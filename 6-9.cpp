#include<stdio.h>

#define NUMBER 5
void rev_intary(int v[],int n){
	int i , tem;
	
	for(i=0; i<n/2 ; i++){
	    tem=v[i];
	    v[i]=v[n-i-1];
	    v[n-i-1]=tem;
	}
	    
}

int main(void){
	int i , j ;
	int n[NUMBER];
	
	printf("请输入%d个数：\n", NUMBER);
	for(i=0;i<NUMBER;i++){
		printf("第%d个数：", i+1);   scanf("%d", &n[i]);
	}
	
    printf("该数组倒序:\n");	
	rev_intary(n, NUMBER);
	for(j=0 ; j<NUMBER ; j++){
	    printf("%d\n" , n[j]);
	}
	return 0 ;
}
