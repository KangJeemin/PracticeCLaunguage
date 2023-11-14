#include <stdio.h> 

int main(void)
{   
    int num = 1;
    int total = 0;

    while (num <= 100)
    {
        printf("%d + %d = ", total, num);
        total += num;
        printf("%d\n", total);
    
        num++;
    }
    
printf("출력이 완료되었습니다.\n");
return 0;
}