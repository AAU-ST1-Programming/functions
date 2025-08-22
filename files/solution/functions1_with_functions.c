#include <stdio.h>  /* printf */
#include <stdlib.h> /* rand, srand */
#include <time.h>   /* time*/

/* function declarations */
int createArray(int *array, int min_len, int max_len);
void assignRandomValues(int *arr, int length, int max_value);
int selectRandomValue(int *arr, int length);
int countValuesAboveThreshold(int *arr, int length, int threshold);

int main()
{
    /* allocate variables */
    int length, threshold, elements_above_threshold = 0;
    int MAX_LEN = 100, MIN_LEN = 20, MAX_VAL = 300;
    int *array;
    // create new seed (gør at vi får tilfældige tal hver gang)
    srand(time(NULL));


    /* funktionality */
    length = createArray(array, MIN_LEN, MAX_LEN);
    assignRandomValues(array, length, MAX_VAL);
    threshold = selectRandomValue(array, length);
    elements_above_threshold = countValuesAboveThreshold(array, length, threshold);

    /* Skriv antallet af elementer i arrayet,
     * som er over det random element */
    printf("N(%i)=%i", threshold, elements_above_threshold);

    free(array);
    return 0;
}

int createArray(int *array, int min_len, int max_len)
{
    /* Dynamic allocate array memory between min_len and max_len */
    int N = (rand() % max_len - min_len + 1) + min_len;

    array = (int *)malloc(N * sizeof(int));

    return N;
}

void assignRandomValues(int *arr, int length, int max_value)
{
    /* assign random values to arr between 0 and max_value */
    for (int i = 0; i < length; i++)
        arr[i] = rand() % max_value;
}

int selectRandomValue(int *arr, int length)
{
    return arr[rand() % length];
}

int countValuesAboveThreshold(int *arr, int length, int threshold)
{
    /* count the number of elements in array above threshold */
    int N = 0;
    for (int i = 0; i < length; i++)
        if (arr[i] > threshold)
            N++;
    return N;
}