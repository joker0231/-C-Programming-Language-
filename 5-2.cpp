#include <stdio.h> 
 
int main(void)
{
	int i;
	int v[5];
	
	for(i=5;i>0;i--){
		v[5-i]=i;
		printf("v[%d] = %d\n",5-i,v[5-i]);
	}
	return 0;
}

