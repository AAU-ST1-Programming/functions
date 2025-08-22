#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ids[] = {1, 3, 52, 2352};
    int ages[] = {13, 44, 51, 100};
    float weights[] = {80, 99, 100, 50};
    float heights[] = {1.80, 1.62, 1.30, 1.24};

    // Udregn længde på array (sådan gør man i C)
    int number_of_patients = sizeof(ids) / sizeof(ids[0]);

    /* Loop through all patients*/
    for (int i = 0; i < number_of_patients; i++)
    {
        /* Print patient information */
        printf("Patient Information for %d patients\n", number_of_patients);
        printf("###\n");
        printf(" PatientID:\t%d\n", ids[i]); // bug fixed
        printf(" age:\t\t%d years\n", ages[i]);
        printf(" weight:\t%.1f kg\n", weights[i]);
        printf(" height:\t%.2f m\n", heights[i]);
    }
    return 0;
}
