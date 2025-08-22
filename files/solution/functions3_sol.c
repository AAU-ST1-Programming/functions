#include <stdio.h> /* printf */

void printValue(int *pval);
int main()
{
    int value = 101;
    printValue(&value);
    return 0;
}
void printValue(int *pval)
{
    printf("pval(0x%x)=%i\n", pval, *pval);
}