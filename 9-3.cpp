#include<stdio.h>
#include<string.h>
#define NUMBER 30
int main(void)
{
	int i;
	char s[NUMBER][128];
	
	for(i=0 ; i<NUMBER ; i++){
		printf("s[%d]:" , i);
		scanf("%s" , s[i]);
		if (strcmp(s[i], "$$$$$") == 0){
			break;
		}
	}
	
	for(i=0 ; i<NUMBER ; i++){
	    printf("s[%d]=\"%s\"\n" , i , s[i]);
		if (strcmp(s[i+1], "$$$$$") == 0){
			break;
		}
	}
	return 0;
}
    
