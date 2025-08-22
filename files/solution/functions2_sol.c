

#include <stdio.h> /* printf */

// 2.
float calculateBMI(float height, float weight);

int main()
{
    // 1.
    float height = 1.8, weight = 63.0;
    // 5.
    float bmi = calculateBMI(height, weight);

    // 6.
    printf("BMI=%.2f\n", bmi);
    return 0;
}

// 3.
float calculateBMI(float height, float weight)
{
    /* 4. calculate bmi from height and weight*/
    return weight / height / height;
}