#include <stdio.h>

#define NUMBER 7

int search_idx(const int v[], int idx[], int key, int n){
	int i, j=0;
	for(i=0 ; i<n ;i++){
	    if(v[i]==key ){
	        idx[j]=i;
	        j++;
		}
	}
	return j;
} 

int main(void){
	int i,j, key;
	int n[NUMBER];
	int idx[NUMBER];
	
	printf("请输入%d个数字。" , NUMBER);
	printf("请输入关键数字：");   scanf("%d", &key);
	for(i=0 ; i<NUMBER; i++){
		printf("第%d个数：", i+1);   scanf("%d", &n[i]);
	} 
	j= search_idx(n,  idx,  key, NUMBER);
	printf("有%d个关键数字一样的数字", j); 
	
	return 0;
}
