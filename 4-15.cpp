#include<stdio.h>

int main(void)
{   
	int x, y ,z , w;
	
    printf("��ʼ��ֵ��cm����");    scanf("%d", &x);
    printf("������ֵ��cm����");    scanf("%d", &y);
    printf("�����ֵ��cm����");    scanf("%d", &z); 
    
    for(x; x<=y ; x+=z){

       printf("%dcm   ",x);   
       w=(x-80)*0.7;
	   printf("%.2fkg\n",(double)w );
	   	}
    return 0;
}

