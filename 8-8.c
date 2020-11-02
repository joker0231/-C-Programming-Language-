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
    printf("请输入x的值：");    scanf("%d", &x);
    printf("请输入y的值：");    scanf("%d", &y);

    printf("x和y的最大公约数为%d。", gcd(x,y));

    return 0;
}
