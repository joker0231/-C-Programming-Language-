#include<stdio.h>

int main(void)
{   
    int x, y=1;
	
	printf("ÕýÕûÊý£º");    scanf("%d", &x) ;
	
	if(x>=0)
	{
	  while(x>=y)
    	{
	    	if(y % 2==1)
	    	printf("+");
	    	else
		    printf("-");
		    
		    y++ ;
    	}	
	}
    else
    
    return 0;
}

