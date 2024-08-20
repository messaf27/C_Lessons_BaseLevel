/*
    Задача 4. Сумма от 1 до N
    Составить функцию, которая определяет сумму всех чисел от 1 до N и
    привести пример ее использования.
    Пример №1
    Данные на входе: Одно целое положительное число N
    Данные на выходе: Целое число - сумма чисел от 1 до N
    Пример №2
    Данные на входе: 100
    Данные на выходе: 5050
*/

#include <stdio.h>
#include <stdint.h>

int sumToN(int num) {
    int result = 0;
    for (int i = 1; i <= num; i++)
        result += i;

    return result;
}

int main()
{
    int number = 0;

    printf("Input number: "); scanf("%d", &number);
    printf("Result = %d \r\n", sumToN(number));
}