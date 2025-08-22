#include <stdio.h> /* printf */

void printPatientInfo(int id, int age, float weight, float height);

int main(int argc, char const *argv[])
{
	int ids[] = {1, 3, 52, 23};
	int ages[] = {13, 44, 51, 100};
	float weights[] = {80, 99, 100, 50};
	float heights[] = {1.80, 1.62, 1.30, 1.74};

	// Udregn længde på array (sådan gør man i C)
	int number_of_patients = sizeof(ids) / sizeof(ids[0]);

	/* Loop through all patients*/
	printf("Patient Information for %d patients\n", number_of_patients);
	for (int i = 0; i < number_of_patients; i++)
	{
		/* Print patient information */
		printPatientInfo(ids[i], ages[i], weights[i], heights[i]);
	}
	return 0;
}

void printPatientInfo(int id, int age, float weight, float height)
{
	/* Print information regarding patient */
	printf("###\n");
	printf("  PatientID:\t%d\n", id);
	printf("  age:\t\t%d years\n", age);
	printf("  weight:\t%.1f kg\n", weight);
	printf("  height:\t%.2f m\n", height);
}