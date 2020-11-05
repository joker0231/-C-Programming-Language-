#include<stdio.h>
#include<string.h>

int del_digit(char s[]){
	int i;
	char temp[128];
	for(i=0;i<=(strlen(s)-1);i++){
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
			temp[i]=s[i];
		}
		else{
			continue;
		}
		putchar(temp[i]);		
	}
}


int main(void)
{
	char ch[128];
	printf("ÇëÊäÈë×Ö·û´®: ");
    scanf("%s", ch);
    printf("¸üÐÂºÃµÄ×Ö·û´®");
	del_digit(ch);
    return 0;
}

