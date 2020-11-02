#include <stdio.h>

int combination(int n, int r){
    int y;
    if(r!=0 && r!=n){
    y = combination(n-1, r-1) + combination(n-1 , r);
    }
    else if(r==0||r==n){
        combination == 1;
    }
}

int main(void){
    int n, r , y;

    printf("请输入一共有多少个整数：");    scanf("%d", &n);
    printf("请输入取出个整数：");    scanf("%d", &r);

	printf("combination(%d,%d) = %d\n",n,r,combination(n,r));


    return y;
}
