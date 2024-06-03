
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

int main(void)
{
    bool yesFlag = true;
    int lastDig = 0, curDigit = 0;

    printf("--- Input three digits --- \n");

    for (int i = 0; i < 3; i++)
    {
        printf("Input (%d): ", i + 1);
        scanf("%d", &curDigit);

        if(curDigit > lastDig && yesFlag)
            lastDig = curDigit;
        else
            yesFlag = false;    
    }
    
    printf("==================== \n");    
    printf("Result: %s \n", yesFlag ? "YES" : "NO");
    printf("==================== \n");    

    return 0;
}