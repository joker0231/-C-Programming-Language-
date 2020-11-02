#include<stdio.h>
#define NUMBER 30
int main(void)
{
	int i;
	char s[NUMBER][128];
	
	for(i=0 ; i<NUMBER ; i++){
		printf("s[%d]:" , i+1);
		scanf("%s" , s[i][128]);
		if(s[i][128]=='$$$$$'){
			break;
		}
	}
	
	for(i=0 ; i<NUMBER ; i++){
		if(s[i][128]=='$$$$$'){
			break;
		}
		printf("s[%d]=\"%s\"\n" , i , s[i]);
	}
	return 0;
}
    
