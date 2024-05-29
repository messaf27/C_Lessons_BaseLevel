#include <stdio.h>

int main(void)
{
    int inDigit = 0;
    int a, b, c, d;
    
    printf("Input four digits:");
    scanf("%d", &inDigit);
    
    a = inDigit / 1000;
    b = (inDigit / 100) % 10;
    c = (inDigit / 10) % 10;
    d = (inDigit % 1000) % 10;

    printf("Average = %.2f \n", (float)((a+b+c+d) / 4.f));
    
    return 0;
}