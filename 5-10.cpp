#include <stdio.h>

int main(void)
{
	int x[4][3], y[3][4];
	int i,j;
	
	printf("������һ���������о����ֵ��");
	
	for(i=0 ; i<4 ; i++){
	    printf("��%d�У�", i+1);
	    for(j=0 ; j<3 ; j++){
	        scanf("%d",&x[i][j]);
		}
		printf("\n");
	}
	
	printf("������һ���������о����ֵ��");
	
	for(i=0 ; i<3 ; i++){
	    printf("��%d�У�", i+1);
	    for(j=0 ; j<4 ; j++){
	        scanf("%d",&y[i][j]);
		}
		printf("\n");
	}
	
	for(i=0 ; i<4; i++){
	    printf("��%d��:", i+1);
	    for(j=0 ; j<3 ; j++){
	        printf("%d ", x[i][j] * y[j][i]);
		}
		printf("\n");
	}
	
	return 0;
			 
		 
 } 
