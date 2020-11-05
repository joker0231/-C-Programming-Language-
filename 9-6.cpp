#include <stdio.h>
#include<string.h>

int str_char(const char s[], int c){
	int i , j=0;
	for(i= 0 ; i<strlen(s) ; i++){
		if (s[i]=='c')
		j++; 
	}
	return j;
}

int main(void){
	char ch[128];
    int j=0;
	printf("ÇëÊäÈë×Ö·û´®: ");
    scanf("%s", ch);
    j=str_char(ch, 'c');
	printf("×Ö·û´®sÖÐÓÐ%d¸öc",j);
    return 0;
}
