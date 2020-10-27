#include <stdio.h>

#define NUMBER 7

int main(void)
{
	int i,temp;
	int x[NUMBER];
	
	for(i=0; i<NUMBER;i++) {
        printf("x[%d] : ",i);
        scanf("%d",&x[i]);
    	}
    	
    for(i=0; i<(NUMBER-1)/2 ; i++){
	 temp =x[i];
        x[i]=x[NUMBER-1-i];
        x[NUMBER-1-i]= temp;
    }
       
    puts("µ¹ÐòÅÅÁÐÁË¡£");
	for(i=0; i<NUMBER ; i++)
	    printf("x[%d]=%d/n", i, x[i]);
		
	return 0; 
 } 
