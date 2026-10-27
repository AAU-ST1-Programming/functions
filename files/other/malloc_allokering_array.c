#include <stdio.h>
#include <stdlib.h>

int *allocate_array(int N);

int main(int argc, char const *argv[])
{
    int N = 3;
    int *arr = allocate_array(N);

    return 0;
}

int *allocate_array(int N)
{
    int *arr = malloc(sizeof(int) * N);
    for (size_t i = 0; i < N; i++)
    {
        arr[i] = i;
    }

    return arr;
}
