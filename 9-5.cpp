#include <stdio.h>
#include<string.h>

int str_char(const char s[], int c){
	int i;
	for(i=0 ; i<strlen(s) ; i++){
		if(s[i]=='c'){
		    return i+1 ;
		}}
	    return -1; 
}

int main(void){
	char ch[128];
    int i;
	printf("�������ַ���: ");
    scanf("%s", ch);
    i=str_char(ch, 'c');
	printf("�ַ�c���±�ֵΪ%d",i);
    return 0;
}
