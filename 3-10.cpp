#include <stdio.h>

int main (void)
{
	int x, y, z;
	
	printf("����������������");
	
	printf("����A��");  scanf("%d",  &x);
	printf("����B��");  scanf("%d",  &y);
	printf("����C��");  scanf("%d",  &z);
	
	if  (x==y && y==z)
	  printf("����ֵ����ȡ�");
	else if  (x!=y && y!=z && x!=z)
	  printf("����ֵ������ͬ��");
	else
	  printf("������ֵ��ȡ�"); 
	  
	return 0; 
}
