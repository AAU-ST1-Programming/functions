#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[] = {1321, 51, 12, 5, 312, 3123, 4, 1, 3};
    int N = sizeof(array) / sizeof(array[0]);
    int *array2 = malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
    {
        array2[i] = array[i];
        }

    return 0;
}
