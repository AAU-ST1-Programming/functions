
#include <stdio.h>
#include <math.h>

/* function declarations */
float mean(float *arr, int len);
float std(float *arr, int len);
void printStatistics(char *measurement, float gennemsnit, float afvigelse);

int main()
{

	float ages[] = {13, 44, 51, 100};
	float weights[] = {80, 99, 100, 50};
	float heights[] = {1.80, 1.62, 1.30, 1.74};

	float m_age, m_height, m_weight;
	float s_age, s_height, s_weight;

	// Udregn længde på array (sådan gør man i C)
	int number_of_patients = sizeof(ages) / sizeof(ages[0]);

	// 1.
	m_age = mean(ages, number_of_patients);
	m_height = mean(heights, number_of_patients);
	m_weight = mean(weights, number_of_patients);
	// 2.
	s_age = std(ages, number_of_patients);
	s_height = std(heights, number_of_patients);
	s_weight = std(weights, number_of_patients);

	// print patient descriptives
	printf("Patient Descriptives for %i Patients\n", number_of_patients);
	// 3.
	printStatistics("Age (Years)", m_age, s_age);
	printStatistics("Height (M)", m_height, s_height);
	printStatistics("Weight (Kg)", m_weight, s_weight);
	return 0;
}

/* function definitions*/

float mean(float *arr, int len)
{
	/* udregner gennemsnit af arrayet arr */
	// mu = sum arr / len
	float gennemsnit = 0;
	for (int n = 0; n < len; n++)
	{
		gennemsnit += arr[n] / len;
	}
	return gennemsnit;
}

float std(float *arr, int len)
{
	float afvigelse, gennemsnit;
	/* udregner afvigelsen af arrayet arr */
	gennemsnit = mean(arr, len);

	for (int n = 0; n < len; n++)
	{
		afvigelse += pow(arr[n] - gennemsnit, 2.0) / (len - 1);
	}
	afvigelse = sqrt(afvigelse);

	return afvigelse;
}

void printStatistics(char *measurement, float gennemsnit, float afvigelse)
{
	/* printer en række i den descriptive tabel */
	printf("%14s: %.2f(%.2f)\n", measurement, gennemsnit, afvigelse);
}