/*
  System now capable of printing name and Weight classification!
  Questions: Is this easy to read? (what is the issue?)
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  int ids[] = {1, 3, 52, 23};
  int ages[] = {13, 44, 51, 100};
  float weights[] = {80, 99, 100, 50};
  float heights[] = {1.80, 1.62, 1.30, 1.74};
  char weight_classification[30];

  // Udregn længde på et helt array (sådan gør man i C)
  int number_of_patients = sizeof(ids) / sizeof(ids[0]);

  /* Loop through all patients*/
  /* for-loop is getting complicated! */
  for (int i = 0; i < number_of_patients; i++)
  {
    // BMI classification.
    float bmi = weights[i] / heights[i] / heights[i];
    if (bmi <= 18.5)
    {
      strcpy(weight_classification, "Underweight");
    }
    else if (bmi <= 24.9)
    {
      strcpy(weight_classification, "Normal");
    }
    else if (bmi <= 29.9)
    {
      strcpy(weight_classification, "Overweight");
    }
    else
    {
      strcpy(weight_classification, "Obese");
    }

    /* Print patient information */
    printf("Patient Information for %d patients\n", number_of_patients);
    printf("###\n");
    printf(" PatientID:\t%d\n", ids[i]);
    printf(" age:\t\t%d years\n", ages[i]);
    printf(" weight:\t%.1f kg\n", weights[i]);
    printf(" height:\t%.2f m\n", heights[i]);
    printf(" classification: %s\n", weight_classification);
  }
  return 0;
}
