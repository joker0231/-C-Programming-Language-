#include <stdio.h>

unsigned rrotate(unsigned x, int n){
	return x >> n;
}

unsigned lrotate(unsigned x, int n)
{
    return x << n;
}

int main(void){
	int x, n ; 
	
	printf("�������޷���������");
    scanf("%u",&x);
    printf("������λ�Ƶ�λ����");
    scanf("%d",&n);
	
	printf("%d���ƺ��ֵΪ%d��", x, rrotate(x , n));
	printf("%d���ƺ��ֵΪ%d��", x , lrotate(x , n));
	
	return 0;
	
}
