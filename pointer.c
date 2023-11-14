#include <stdio.h>
void swap(int *px, int *py);

int main(void) {
    int a =100;
    int b =200;
    
    printf("swap() 호출하기 전 a=%d b=%d\n",a,b);

    swap(&a,&b);

    printf("swap() 호출후 a=%d b=%d\n",a,b);

    return 0;
}

void swap(int *px, int *py){
    int tmp;

    tmp = *px;
    *px = *py;
    *py = tmp;
}