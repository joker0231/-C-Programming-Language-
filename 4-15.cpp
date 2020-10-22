#include<stdio.h>

int main(void)
{   
	int x, y ,z , w;
	
    printf("开始数值（cm）：");    scanf("%d", &x);
    printf("结束数值（cm）：");    scanf("%d", &y);
    printf("间隔数值（cm）：");    scanf("%d", &z); 
    
    for(x; x<=y ; x+=z){

       printf("%dcm   ",x);   
       w=(x-80)*0.7;
	   printf("%.2fkg\n",(double)w );
	   	}
    return 0;
}

