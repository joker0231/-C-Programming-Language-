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
	
	printf("������%d�����֡�" , NUMBER);
	printf("������ؼ����֣�");   scanf("%d", &key);
	for(i=0 ; i<NUMBER; i++){
		printf("��%d������", i+1);   scanf("%d", &n[i]);
	} 
	j= search_idx(n,  idx,  key, NUMBER);
	printf("��%d���ؼ�����һ��������", j); 
	
	return 0;
}
