#include <stdio.h>

int main(void)
{
    int n;
    printf("sizeof 1:                %u\n",sizeof 1);             //1是int型，所以是4
    printf("sizeof -1:               %u\n",sizeof +1);            //+1是int型，所以是4
    printf("sizeof +1:               %u\n",sizeof -1);            //-1是int型，所以是4
    printf("sizeof(unsigned) - 1:    %u\n",sizeof(unsigned) - 1); //unsigned是4，减1后为3
    printf("sizeof(double) - 1:      %u\n",sizeof(double) - 1);   //double是8，减1后为7
    printf("sizeof((double) - 1):    %u\n",sizeof((double) - 1)); //1是int型，double型减int型，结果还是double型，所以为8
    printf("sizeof n + 2:            %u\n",sizeof n + 2);         //n是int型，为4，加2后为6
    printf("sizeof (n + 2):          %u\n",sizeof (n + 2));       //n是int型，int型+int型，结果还是int型，所以为4
    printf("sizeof (n + 2.0):        %u\n",sizeof (n + 2.0));     //n是int型，2.0是double型，int型加double型，结果为double型，所以为8

    return 0;
}

