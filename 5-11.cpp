#include <stdio.h>

int main(void)
{
	int x[2][6];
	int i , j;
	int sum1=0 , sum2=0;
	
	printf("请输入六名学生两门课程的分数。\n");
	
	for(i=0 ; i<6 ; i++){
		printf("第%d名", i+1);
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
	
	printf("语文总分为：%2d\n数学的总分为：%2d", sum1, sum2);
	printf("语文平均分为：%d\n数学的平均分为：%d", (int)sum1/i, (int)sum2/6);
	
	for(i=0 ; i<6 ; i++){
		printf("第%d名学生的总分和平均分分别为%2d  %d", i+1, (x[0][i]+x[1][i]) , (x[0][i]+x[1][i])/2);
		printf("\n");
	}
	
	return 0 ;
 } 
