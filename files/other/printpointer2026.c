#include <stdio.h>
void printValue(int *pval);

int main()
{
    int value = 101;
    printValue(&value);

    return 0;
}

void printValue(int *pval)
{
    printf("Memory Address: %p\n", pval);
    printf("Value at Address: %i\n", *pval);
}