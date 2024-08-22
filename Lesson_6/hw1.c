/*

*/

#include <stdio.h>
#include <locale.h>
// #include <stdint.h>
#include <inttypes.h>
#include <conio.h>

uint8_t i = 0;

int main()
{
    setlocale(LC_ALL, "Rus");
    printf("Проверка русского языка\n");
    char c;
    while ((c = getchar()) != '.')
        putchar(c);

    printf("%" PRIu64, i);    
}