#include <stdio.h>

/*
    Задача 1. Сумма трех чисел

    Ввести три числа, найти их сумму
    Нужно напечатать сумму трех чисел
    Данные на входе: Три целых числа через пробел
    Данные на выходе: Строка вида %d+%d+%d=%d

    Пример №1:
    Данные на входе: 4 5 7
    Данные на выходе: 4+5+7=16

    Пример №2:
    Данные на входе: 10 20 30
    Данные на выходе: 10+20+30=60
*/

int main(void)
{
    int a, b , c;
    printf("Input three digits:");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d + %d + %d = %d \n", a, b, c, a+b+c);

    return 0;
}