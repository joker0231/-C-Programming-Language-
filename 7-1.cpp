#include <stdio.h>

int main(void)
{
    int n;
    printf("sizeof 1:                %u\n",sizeof 1);             //1��int�ͣ�������4
    printf("sizeof -1:               %u\n",sizeof +1);            //+1��int�ͣ�������4
    printf("sizeof +1:               %u\n",sizeof -1);            //-1��int�ͣ�������4
    printf("sizeof(unsigned) - 1:    %u\n",sizeof(unsigned) - 1); //unsigned��4����1��Ϊ3
    printf("sizeof(double) - 1:      %u\n",sizeof(double) - 1);   //double��8����1��Ϊ7
    printf("sizeof((double) - 1):    %u\n",sizeof((double) - 1)); //1��int�ͣ�double�ͼ�int�ͣ��������double�ͣ�����Ϊ8
    printf("sizeof n + 2:            %u\n",sizeof n + 2);         //n��int�ͣ�Ϊ4����2��Ϊ6
    printf("sizeof (n + 2):          %u\n",sizeof (n + 2));       //n��int�ͣ�int��+int�ͣ��������int�ͣ�����Ϊ4
    printf("sizeof (n + 2.0):        %u\n",sizeof (n + 2.0));     //n��int�ͣ�2.0��double�ͣ�int�ͼ�double�ͣ����Ϊdouble�ͣ�����Ϊ8

    return 0;
}

