
/*
    Задача 4. Какое время года

    Ввести номер месяца и вывести название времени года.
    Данные на входе: Целое число от 1 до 12 - номер месяца.
    
    Данные на выходе: Время года на английском: winter, spring, summer, autumn

    Пример №1
    Данные на входе: 4
    Данные на выходе: spring

    Пример №2
    Данные на входе: 1
    Данные на выходе: winter
*/

#include <stdio.h>

int main(void)
{
    int month = 0;

    printf("Input month number (1...12): ");
    scanf("%d", &month);

    switch (month) 
    {
        case 1: 
        case 2: 
        case 12:
                printf("winter"); 
            break;
        case 3: 
        case 4: 
        case 5:
                printf("spring"); 
            break;
        case 6: 
        case 7: 
        case 8:
                printf("summer"); 
            break;
        case 9: 
        case 10: 
        case 11:
                printf("autumn");
            break;
        default:
            printf("ERROR month number!!! (1-12)");
    }
 
    return 0;
}