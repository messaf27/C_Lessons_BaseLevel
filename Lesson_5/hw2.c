/*
    Задача 2. НОД
    Составить функцию, которая определяет наибольший общий делитель двух
    натуральных и привести пример ее использования
    https://younglinux.info/algorithm/euclidean
    int nod(int a, int b)
    Данные на входе: Два целых положительных числа
    Данные на выходе: Одно целое число - наибольший общий делитель.
    Пример №1
    Данные на входе: 14 21
    Данные на выходе: 7
*/

#include <stdio.h>
#include <stdint.h>

int nod(int a, int b) {
    while (a !=0 && b != 0)
    {
        if(a > b) a = a % b;
        else b = b % a;
    }
    return a + b;
}

int main()
{
    int a = 0, b = 0;

    printf("Input A: "); scanf("%d", &a);
    printf("Input B: "); scanf("%d", &b);

    printf("Result = %d \r\n", nod(a, b));
}