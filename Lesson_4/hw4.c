/*
    Ввести целое число и «перевернуть» его, так чтобы первая цифра стала
    последней и т.д.

    Данные на входе: Целое неотрицательное число
    Данные на выходе: Целое неотрицательное число наоборот

    Пример №1
    Данные на входе: 1234
    Данные на выходе: 4321

    Пример №2
    Данные на входе: 782
    Данные на выходе: 287
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int inputNum, mirrorNum;

    printf("Input number: ");
    scanf("%d", &inputNum);

    while(inputNum > 0) {
        mirrorNum = (inputNum %10) + (mirrorNum * 10);
        inputNum /= 10;
    }

    printf("Result: %d \n", mirrorNum);

    return 0;
}