/*
    Ввести целое число и определить, верно ли, что все его цифры четные
    Данные на входе: Одно целое число
    Данные на выходе: YES или NO

    Пример №1
    Данные на входе: 2684
    Данные на выходе: YES

    Пример №2
    Данные на входе: 2994
    Данные на выходе: NO
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int inputNum = 0;
    bool result = true;

    printf("Input number: ");
    scanf("%d", &inputNum);

    while(inputNum){
        if((inputNum % 10) % 2 != 0){
            result = false;
            break;
        }
        inputNum /= 10;
    }

    printf("Result: %s \n", result ? "YES" : "NO");

    return 0;
}