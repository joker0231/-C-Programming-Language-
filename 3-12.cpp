#include<stdio.h>

int main(void)
{   
    int x;
    printf("������һ������:");
    scanf("%d",&x);
	
	switch( x % 2){
		case 0 : puts("��������ż��");break; 
		case 1 : puts("������������");break;
	} 

    return 0;
}

