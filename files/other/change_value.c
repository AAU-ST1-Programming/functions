#include <stdio.h>

#include "minheader.h"

int main()
{
    int v = 9999;
    int *p_v = &v;
    change_value_by_reference(p_v);
    printf("v = %i", v);

    return 0;
}

void change_value_by_value(int value)
{
    value = 10;
}

void change_value_by_reference(int *value)
{
    value[0] = 10;
}
