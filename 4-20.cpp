#include <stdio.h>

int main(void)
{
	int x , y ;
	
	printf("  |  1  2  3  4  5  6  7  8  9\n");
	printf("------------------------------\n");
	
	for(x=1; x<=9 ;x++ ){
	   printf("%d | ", x);
	   for(y=1; y<=9 ;y++ ){
	   	    printf("%2d ",y*x);
	   } printf("\n");
	}
	
	return 0;
 } 
