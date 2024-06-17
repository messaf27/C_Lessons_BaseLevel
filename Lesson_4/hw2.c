/*
    Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

    Данные на входе: Целое положительное число
    Данные на выходе: Одно слово: YES или NO

    Пример №1
    Данные на входе: 123
    Данные на выходе: YES

    Пример №2
    Данные на входе: 1234
    Данные на выходе: NO
*/

#include <stdio.h>

int main()
{
    int inputNum = 0;
    int result;

    printf("Input number: ");
    scanf("%d", &inputNum);

    while(inputNum){
        inputNum /= 10;
        result++;
    }

    printf("Result: %s \n", result == 3 ? "YES" : "NO");

    return 0;
}