#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Input two digits:");
    scanf("%d %d", &a, &b);
    printf("%d - %d = %d \n",a, b, a-b);

    return 0;
}