#include <stdio.h> /* printf */

void printPatientInfo(int id, int age, float weight, float height);

int main(int argc, char const *argv[])
{
	int id = 13;
	int age = 44;
	float weight = 80;
	float height = 1.80;

	/* Loop through all patients*/
	printf("Patient Information:\n");
	/* Print patient information */
	printPatientInfo(id, age, weight, height);

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