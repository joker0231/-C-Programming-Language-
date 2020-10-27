#include <stdio.h> 
 
int main(void)
{
	int i;
	int a[5] = {17,23,36};
	int b[5];
	printf("  a    b\n");
	printf("-------\n");	
	for(i=0;i<5;i++){
		b[i]=a[4-i];

		printf("%4d%4d\n",a[i],b[i]);
	}
	return 0;
}

