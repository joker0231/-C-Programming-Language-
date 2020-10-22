#include <stdio.h>
 
int main(void)
{
	int a, b;
	
	printf("ÕûÊıÖµ£º");
	scanf("%d",&a);
	
	for(b = 1; b <= a; b++){
		if(b%2==1)
			printf("%d ",b);

	}

		return 0;
}

