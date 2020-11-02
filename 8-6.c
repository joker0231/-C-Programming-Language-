#include <stdio.h>

#define NUMBER 6
int main(void){
    int i ;
    int a[NUMBER];
    int mult=1;

    for(i=0 ; i<NUMBER; i++){
        a[i]=i+1;
    }

    for(i=0 ; i<NUMBER ; i++){
        mult *= a[i];
    }

    printf("%d",mult);

    return 0;
}
