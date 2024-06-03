
/*
Задача 2. Наименьшее из пяти чисел

Ввести пять чисел и вывести наименьшее из них
Нужно напечатать наименьшее число

Данные на входе: Пять целых чисел разделенных пробелом
Данные на выходе: Одно целое число

Данные на входе: 4 15 9 56 4
Данные на выходе: 4

*/

#include <stdio.h>

#define ARRAY_SIZE(arr)    (sizeof(arr) / sizeof(arr[0]))

int main(void)
{
    int min = 0;
    int inputDigits[5] = {0,};

    printf("--- Input five digits --- \n");

    for (int i = 0; i < ARRAY_SIZE(inputDigits); i++)
    {
        printf("Input (%d): ", i + 1);
        scanf("%d", &inputDigits[i]);

        if(inputDigits[i] < min || min == 0)
            min = inputDigits[i];
    }
    
    printf("==================== \n");    
    printf("Min digit = %d \n", min);
    printf("==================== \n");    

    return 0;
}