#include <stdio.h>
void put_stringn(const char s[] , int n){
	int i=0, j;
	while(i<n){
	    j=0 ;
		while(s[j]){
		    putchar(s[j++]);
		}
		i++;
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
