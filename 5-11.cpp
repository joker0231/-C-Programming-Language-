#include <stdio.h>

int main(void)
{
	int x[2][6];
	int i , j;
	int sum1=0 , sum2=0;
	
	printf("����������ѧ�����ſγ̵ķ�����\n");
	
	for(i=0 ; i<6 ; i++){
		printf("��%d��", i+1);
		for(j=0 ; j<2 ; j++){
			scanf("%d", &x[j][i]);
		}
	} 
	
	for(i=0 ; i<6 ; i++){
		sum1 += x[0][i];
	}
	
	for(i=0 ; i<6 ; i++){
		sum2 += x[1][i];
	}
	
	printf("�����ܷ�Ϊ��%2d\n��ѧ���ܷ�Ϊ��%2d", sum1, sum2);
	printf("����ƽ����Ϊ��%d\n��ѧ��ƽ����Ϊ��%d", (int)sum1/i, (int)sum2/6);
	
	for(i=0 ; i<6 ; i++){
		printf("��%d��ѧ�����ֺܷ�ƽ���ֱַ�Ϊ%2d  %d", i+1, (x[0][i]+x[1][i]) , (x[0][i]+x[1][i])/2);
		printf("\n");
	}
	
	return 0 ;
 } 
