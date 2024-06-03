
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

#define ARRAY_SIZE      5

int main(void)
{
    int min = 0;
    int inputDigits[ARRAY_SIZE] = {0,};

    printf("--- Input %d digits --- \n", ARRAY_SIZE);

    for (int i = 0; i < ARRAY_SIZE; i++)
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