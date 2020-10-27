#include <stdio.h>
 
int main(void)
{
    int x,y, len;
    
    printf("生成直角在左上方的等腰直角三角形。\n");
	printf("短边：");
	scanf("%d",&len);
	
	for(x=1 ; x<=len ; x++){
	
	    for(y=len+1-x ; y>0 ; y--){
	     putchar('*');	}
	    putchar('\n');
    }
	return 0;
} 

