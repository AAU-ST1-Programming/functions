#include <stdio.h>
int main(){
	int id = 13;
	int age = 44;
	float weight = 80.0;
	float height = 1.80;
	float bmi = weight/height/height;
	printf("Patient Information:\n");
	/* Print patient information */
	printf("###\n");
	printf("  PatientID:\t%5d\n", id);
	printf("  age:\t\t%5d years\n", age);
	printf("  weight:\t%5.2f kg\n", weight);
	printf("  height:\t%5.2f m\n", height);
	printf("  BMI:\t\t%5.2f m\n", bmi);
	return 0;
}
