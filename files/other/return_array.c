#include <stdio.h>

void print_array(int *arr, int N);

int main()
{
    int v[] = {9999, 123, 5, 5, -23};
    int N = sizeof(v) / sizeof(v[0]);
    print_array(v, N);

    return 0;
}

void print_array(int *batman, int N)
{
    printf("Hukommelses Addresse: %p\n", batman);
    for (int i = 0; i < N; i++)
    {
        printf("%i, ", batman[i]);
    }
}
