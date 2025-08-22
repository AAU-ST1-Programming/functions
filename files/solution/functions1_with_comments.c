#include <stdio.h>  /* printf */
#include <stdlib.h> /* rand */
#include <time.h> /* time*/

int main()
{
    /* allocate variables */
    int *array;
    int length, random_element, values_above_element=0;
    int MAX_LEN = 100, MIN_LEN = 20;
    /* ændre seed (vi får tilfældige tal hver gang */
    srand(time(NULL));
    /* alloker en dynamisk array mellem 20 og 119 i længde */
    length = (rand() % MAX_LEN-MIN_LEN+1) + MIN_LEN;
    array = (int *)malloc(length * sizeof(int));
    for (int i = 0; i < length; i++)
        array[i] = rand()%300; /* tilfældige tal mellem 0 og 299 */
    /* vælg et tilfældigt element */
    random_element = array[rand()%length];
    /* tæl antallet af elementer i arrayet 
     * over det tilfældige element */
    for (int i = 0; i < length; i++)
        if (array[i]>random_element)
            values_above_element++;
    /* Skriv antallet af elementer i arrayet, over det random element */
    printf("N(%i)=%i",random_element,values_above_element);

    return 0;
}
