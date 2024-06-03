
/*
    Задача 1. Наибольшее из пяти чисел

    Ввести пять чисел и вывести наибольшее из них
    Нужно напечатать наибольшее число

    Данные на входе: Пять целых чисел разделенных пробелом
    Данные на выходе: Одно целое число
    Данные на входе: 4 15 9 56 4
    Данные на выходе: 56
*/


#include <stdio.h>

#define ARRAY_SIZE(arr)    (sizeof(arr) / sizeof(arr[0]))

int main(void)
{
    int max = 0;
    int inputDigits[5] = {0,};

    printf("--- Input five digits --- \n");

    for (int i = 0; i < ARRAY_SIZE(inputDigits); i++)
    {
        printf("Input (%d): ", i + 1);
        scanf("%d", &inputDigits[i]);

        if(inputDigits[i] > max)
            max = inputDigits[i];
    }
    
    printf("==================== \n");    
    printf("Max digit = %d \n", max);
    printf("==================== \n");    

    return 0;
}