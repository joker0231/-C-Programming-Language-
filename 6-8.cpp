#include <stdio.h>
#define NUMBER 5
 int min_of(const int v[] , int n ){
 	int i ;
 	int min=v[0];
 	
 	for(i=0 ; i<n ; i++){
	     if (v[i]<min)
 	        min=v[i];}
 	        
 	return min;
 }
 
 int main(void)
 {
 	int i , min;
 	int n[NUMBER];
 	
 	printf("请输入n个数字。\n");
 	for(i=0 ; i<NUMBER ; i++){
 	    printf("第%d个数：", i+1);   scanf("%d" , &n[i]);
	 }
 	    
 	min=min_of(n , NUMBER);
 	printf("这些数中最小的是%d。", min);
 	return 0;
 	
 }
