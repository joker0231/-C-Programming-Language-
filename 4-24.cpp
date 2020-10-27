#include <stdio.h>
 
int main(void)
{
    int x,y, height;
    
    printf("让我们来画一个金字塔。\n");
	printf("金字塔有几层：");
	scanf("%d",&height);
	
	for(x=1 ; x<=height ; x++){
		for(y=1 ; y<=height-x ; y++)
		   putchar(' ');
		for(y=1 ; y<=2*x-1 ; y++)
		   putchar('*'); 
	    putchar('\n');
	}
    
	return 0;
} 

