#include <stdio.h>
#define PI 3.14

float calcBMI(float height, float weight);
float calcVolumeOfSphere(float r);

int main()
{
    float heights[] = {1.6, 1.8, 1.7, 2.1};
    float weights[] = {80, 55, 60, 120};
    float bmi;

    for (int i = 0; i < 4; i++)
    {
        bmi = calcBMI(heights[i], weights[i]);
        printf("BMI: %.2f\n", bmi);
    }

    return 0;
}

float calcBMI(float height, float weight)
{
    float batman = weight / height / height;
    return batman;
}

float calcVolumeOfSphere(float r)
{
    float V = 4 / 3 * r * r * r * PI;
    return V;
}