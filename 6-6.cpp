#include<stdio.h>

void alert(int ch, int n)
{
	putchar(ch);

}

int main(void)
{
	int a, i;
	printf("������nֵ��");	scanf("%d",&a);
	for(i=1;i<=a;i++){
		alert('\a',i);
	}
	
    return 0;
}

