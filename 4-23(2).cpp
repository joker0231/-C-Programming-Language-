#include <stdio.h>
 
int main(void)
{
    int x,y, len;
    
    printf("����ֱ�������Ϸ��ĵ���ֱ�������Ρ�\n");
	printf("�̱ߣ�");
	scanf("%d",&len);
	
	for(x=1 ; x<=len ; x++){
	    for(y=x-1; y>0; y--)
		   putchar(' '); 
	    for(y=len+1-x ; y>0 ; y--){
	     putchar('*');	}
	    putchar('\n');
    }
	return 0;
} 

