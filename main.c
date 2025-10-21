#include "tm4c123gh6pm.h"
#include "stdint.h"

int series_sum(int);

int main()
{
    int sum, i;

    for (i = 1; i < 11; i++){
        sum = series_sum(i);
    }
    return 1;
}

int series_sum(int k)
{
    // Declaring 5 variables to increase stack frame size
    volatile int a,b,c,d,e;

    if (k == 1)
        return 1;

    return k + series_sum(k - 1);
}
