#include<stdio.h>
#include<string.h>

int rev_string(char s[]){
	int i;
	int j;
	j=strlen(s)-1;
	char temp[128];
	for(i=0;i<=j;i++){
		temp[i]=s[j-i];
	}
	for(i=0;i<=j;i++){
		s[i]=temp[i];
	}

}

int main(void)
{
	char ch[128];
    int i;
	printf("�������ַ���: ");
    scanf("%s", ch);
	rev_string(ch);
	printf("���º���ַ���: %s",ch);
    return 0;
}

