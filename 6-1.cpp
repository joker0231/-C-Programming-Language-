#include  <stdio.h>

int min (int a, int b){
    int min = a;
    if(b<min) min = b;
    
    return min;
}

int main(void){
	int a, b;
	
	printf("������A��ֵ��");	scanf("%d",&a);
	printf("������B��ֵ��");	scanf("%d",&b);	
	printf("A��B�н�С��ֵΪ��%d",min(a,b));
    return 0;
}
