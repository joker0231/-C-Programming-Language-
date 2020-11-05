#include <stdio.h>
#include <string.h>

void put_stringr(const char s[]){
	int i;
	for(i=0 ; i<strlen(s) ; i++){
		putchar(s[strlen(s)-i-1]);
	}
}

int main(void)
{
	char ch[128];
    int i;
	printf("ÇëÊäÈë×Ö·û´®: ");
    scanf("%s", ch);
	put_stringr(ch);
    return 0;
}
