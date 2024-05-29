#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    printf("Input four digits:");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("Average = %.2f\n", (float)((a+b+c+d) / 4.f));
    
    return 0;
}