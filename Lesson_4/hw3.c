
/*
    Задача 3. В порядке возрастания
    Ввести три числа и определить, верно ли, что они вводились в порядке
    возрастания.

    Данные на входе: Три целых числа
    Данные на выходе: Одно слово YES или NO
    
    Пример
    Данные на входе: 4 5 17
    Данные на выходе: YES
*/

#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE(arr)    (sizeof(arr) / sizeof(arr[0]))

int main(void)
{
    bool yesFlag = false;
    int lastDig = 0;
    int inputDigits[3] = {0,};

    printf("--- Input three digits --- \n");

    for (int i = 0; i < ARRAY_SIZE(inputDigits); i++)
    {
        printf("Input (%d): ", i + 1);
        scanf("%d", &inputDigits[i]);

        if(inputDigits[i] > lastDig)
        {
            lastDig = inputDigits[i];
            yesFlag = true;
        }
        else
            yesFlag = false;    
    }
    
    printf("==================== \n");    
    printf("Result: %s \n", yesFlag ? "YES" : "NO");
    printf("==================== \n");    

    return 0;
}