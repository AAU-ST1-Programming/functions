#include <stdio.h>  /* printf */
#include <stdlib.h> /* rand */
#include <time.h>   /* time*/

int main()
{
    int *a = NULL;
    int b, c, d = 0;
    srand(time(NULL));
    b = (rand() % 100 - 20 + 1) + 20;
    a = (int *)malloc(b * sizeof(int));
    for (int i = 0; i < b; i++)
        a[i] = rand() % 300;
    c = a[rand() % b];
    for (int i = 0; i < b; i++)
        if (a[i] > c)
            d++;
    printf("N(%i)=%i", c, d);
    return 0;
}
