#include<stdio.h>

int main(void)
{   
    int month;
    printf("�������·�:");
    scanf("%d",&month);
    
    switch(month){
    	case 3 :  
		case 4 : 
		case 5 : printf("%d���Ǵ���",month);break;
		case 6 : 
		case 7 : 
		case 8 : printf("%d�����ļ�",month);break; 
		case 9 : 
		case 10 : 
		case 11 : printf("%d�����＾",month);break;
		case 1 : 
		case 2 :
		case 12 :printf("%d���Ƕ���",month);break;
		default :printf("���²����ڣ�����");break; 
	}
	return 0;
	}
