#include <stdio.h>
#include <stdlib.h>

#include "aa.h"

int main()
{
    int x, y, sum_values = 0;
    x = 20;
    y = 25;
    sum_values = Sum_V(x,y);
    printf("sum of %d & %d = %d\n", x, y, sum_values);
    return 0;
}
