/*
    Машина состояний 
*/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <inttypes.h>
#include <conio.h>

// uint8_t ruble_1 = 0, ruble_2 = 0, cancel = 0;
enum signals {ONE_RUBLE, TWO_RUBLE, CANCEL, NONE};
enum states {READY, PREPARE, WAIT, CHANGE, RETURN};
const char* menue[] = 
{
    "Exit",
    "Put 1 ruble",
    "Put 2 ruble"
};

char MenueDisplay(const char** m, size_t m_num)
{
    printf("====== Select menu item (%d of %d) ======\n", 0, m_num - 1);
    for (uint8_t item = 1; item < m_num; item++)
    {
        printf("[%d] %s \n", item, m[item]);
    }
    printf("[%d] %s \n", 0, m[0]);
    printf("=======================================\n");
    return getch();
}

uint8_t GetUserSignal(void)
{
    char choice;
    while (1)
    {
        switch (MenueDisplay(menue, 3))
        {
            case '1':  printf("select : 1 \n"); return ONE_RUBLE;
            case '2':  printf("select : 2 \n"); return TWO_RUBLE;
            case '0':  printf("select : 0 \n"); return CANCEL;
            
            default:
                break;
        }
    }
}

uint16_t factorial(uint16_t n)
{
    printf("%d\n", n);
    if(n <= 1)
        return 1;

    uint16_t _f = n * factorial(n - 1);
    printf("%d * factorial(%d) = %d\n", n, n - 1, _f);    
    return _f;
}

void decode_to_bin(int n)
{
    if(n >= 2)
        decode_to_bin(n / 2);
    printf("%d", n % 2);    
}

void print_float_bin(float num)
{
    int fi;
    memcpy(&fi, &num, 4);
    for (int i = 31; i >= 0; i--)
    {
        if(i == 30 || i == 22)
            putchar(' ');
        if(fi & (1 << i)) 
            putchar('1');
        else
            putchar('0');   
    }
    putchar('\n');
    
}

int main()
{
    // factorial(3);
    decode_to_bin(100);
    print_float_bin(15.625);

    // enum states state = READY;
    // enum signals signal = NONE;

    // while (1)
    // {
    //     switch (state)
    //     {
    //         case READY:
    //             printf("Ready!\n");
    //             signal = GetUserSignal();
    //             if(signal == ONE_RUBLE) state = WAIT;
    //             if(signal == TWO_RUBLE) state = PREPARE;
    //         break;

    //         case PREPARE:
    //             printf("Prepare cofe!\n");
    //             state = READY;
    //         break;

    //         case WAIT:
    //             printf("Wait!\n");
    //             signal = GetUserSignal();
    //             if(signal == ONE_RUBLE) state = PREPARE;
    //             if(signal == TWO_RUBLE) state = CHANGE;
    //             if(signal == CANCEL) state = RETURN;
    //         break;

    //         case CHANGE:
    //             printf("Change 1 ruble!\n");
    //             state = PREPARE;
    //             break;

    //         case RETURN:
    //         printf("Change 1 ruble\n");
    //         state = READY;

    //         default:
    //             break;
    //     }
    // }
    
    return 0;
}