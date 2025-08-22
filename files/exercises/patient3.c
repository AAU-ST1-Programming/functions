#include <stdio.h>
int main()
{

	int ages[] = {13, 44, 51, 100};
	float weights[] = {80, 99, 100, 50};
	float heights[] = {1.80, 1.62, 1.30, 1.74};

	// Udregn længde på array (sådan gør man i C)
	int number_of_patients = sizeof(ages) / sizeof(ages[0]);

	// print patient descriptives
	printf("Patient Descriptives for %i Patients\n", number_of_patients);

	return 0;
}
