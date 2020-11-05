#include <stdio.h>
void put_stringn(const char s[] , int n){
	int i , j=0;
	for(i=0 ; i<n ; i++){
		while(s[j])
		    putchar(s[j++]);
	}
} 

int main(void){
	char str[128];
	int n;
	printf("请输入字符串：");
	scanf("%s", str);
	printf("显示次数：");
	scanf("%d", &n) ;
	
	printf("结果是："); 
	put_stringn(str, n);
	return 0;
}

