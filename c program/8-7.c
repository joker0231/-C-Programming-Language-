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

    printf("������һ���ж��ٸ�������");    scanf("%d", &n);
    printf("������ȡ����������");    scanf("%d", &r);

	printf("combination(%d,%d) = %d\n",n,r,combination(n,r));


    return y;
}
