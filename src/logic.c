#include "logic.h"
#include <stdio.h>

int div(int a, int b)
{
    if (b == 0)
    {
        printf("Division by zero\n");
        return -1;
    }
    return a / b;
}

int mul(int a, int b)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}
