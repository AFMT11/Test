#include <stdio.h>
#include <stdlib.h>

#include "aa.h"

int main()
{
    int x, y, sum_values, div_values;
    x = 50;
    y = 10;
    sum_values = Sum_V(x,y);
    div_values = Div_V(x,y);
    printf("sum of %d & %d = %d\n", x, y, sum_values);
    if(Div_V(x,y) == -1)
        printf("can't divide by 0!!!\n");
    else
        printf("div of %d & %d = %d\n", x, y, div_values);
    return 0;
}
