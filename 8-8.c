#include <stdio.h>

int gcd(int a, int b){
    int z;
    if(a<b){
        b = b-a;
        z = gcd(a , b);
    }
    else if(a>b){
        a = a-b;
        z = gcd(a , b );
    }
    else if(a = b){
        z=a;}
    return z;N
}

int main(void){
    int x, y ;
    printf("������x��ֵ��");    scanf("%d", &x);
    printf("������y��ֵ��");    scanf("%d", &y);

    printf("x��y�����Լ��Ϊ%d��", gcd(x,y));

    return 0;
}
