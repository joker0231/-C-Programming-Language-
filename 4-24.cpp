#include <stdio.h>
 
int main(void)
{
    int x,y, height;
    
    printf("����������һ����������\n");
	printf("�������м��㣺");
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

