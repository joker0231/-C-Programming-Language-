#include <stdio.h>
#define NUMBER 5

void bsort(int a[], int n){
    int i , j ,tem;
    for(i=0 ; i<n-1 ; i++){
        for(j=0 ; j<n-1 ; j++){
            if (a[j]<a[j+1]){
                tem = a[j];
                a[j] = a[j+1];
                a[j+1] = tem;}
        }
    }
}

int main(void){
    int i;
    int a[NUMBER];

    printf("������%d�˵���ߡ�" , NUMBER);

    for(i=0 ; i<NUMBER ; i++){
        printf("%d�ţ�" , i+1);    scanf("%d" ,&a[i]);
    }

    bsort(a, NUMBER);

    puts("���������У�");
    for(i=0 ; i<NUMBER ; i++){
        printf("%d�ţ�%d\n" , i+1 , a[i]);
    }

    return 0;
}
