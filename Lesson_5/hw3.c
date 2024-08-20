/*
    Задача 3. Сумма цифр равна произведению
    Составить логическую функцию, которая определяет, верно ли, что в заданном
    числе сумма цифр равна произведению.
    int is_happy_number(int n)
    Данные на входе: Целое не отрицательное число
    Данные на выходе: YES или NO
    Пример №1
    Данные на входе: 123
    Данные на выходе: YES
    Пример №2
    Данные на входе: 528
    Данные на выходе: NO
*/

#include <stdio.h>
#include <stdint.h>

char* check_happy_number(int num) {

    int s = 0, m = 1;
    while (num > 0)
    {
        s += num % 10;
        m *= num % 10;
        num /= 10;
    }
      
    if(s == m) return "YES";

    return "NO";
}

int main()
{
    int number = 0;

    printf("Input number: "); scanf("%d", &number);
    printf("Result = %s \r\n", check_happy_number(number));
}