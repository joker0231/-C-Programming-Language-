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
	printf("�������ַ�����");
	scanf("%s", str);
	printf("��ʾ������");
	scanf("%d", &n) ;
	
	printf("����ǣ�"); 
	put_stringn(str, n);
	return 0;
}

