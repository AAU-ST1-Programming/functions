# Functions - Questions

---

## Question: Functions 1 - Code Readability

**Short Humorous Scenario:**
Martin has seen some code that works but is hard to read. *"This function1.c program prints element counts, but it's so hard to understand! What would help make this more readable? The code must not change functionality."* he asks.

**What they currently know:**
- Comments in C: `//` and `/* */`
- Variable naming conventions
- Function structure
- `printf` formatting

**The Task:**

Given the program output:
```
N(211)=15
N(93)=9
```

1. Examine the code in `functions1.c`
2. Identify what would improve readability
3. Answer: What helps make code more readable without changing functionality?

4. **PBL:** Martin asks: *"Can you explain why meaningful variable names are important in programming?"*

**Hints:**
- Meaningful variable names (e.g., `values_above_element` instead of `x`)
- Comments explaining non-obvious code
- Consistent indentation
- Proper spacing
- See the code in `functions1.c`

**What you must never do:**
- Change the program's functionality
- Remove necessary code
- Alter the logic

---

## Question: Functions 2 - BMI Calculation Function

**Short Humorous Scenario:**
Martin wants to calculate BMI but doesn't want the formula in main(). *"I need a function that calculates BMI. Can you make one?"* he asks. *"It should take weight and height, and return the BMI."*

**What they currently know:**
- Function definition and declaration
- Function parameters
- Return values
- BMI formula: `bmi = weight / (height * height)`

**The Task:**

1. Define variables `weight = 31.1` and `height = 1.31` in `main()`
2. Define function `float calculateBMI(...)` above `int main()`
3. In the `calculateBMI` function:
   - Implement the BMI algorithm
   - Return the BMI value
4. In `main`, call `calculateBMI` with `height` and `weight` as input parameters
5. Store the returned value in a `float bmi` variable
6. Print the result

7. **PBL:** Martin asks: *"Can you modify this function to also print a category (Underweight, Normal, Overweight, Obese) based on the BMI?"*

**Hints:**
- What datatypes should input parameters be? `float` for both
- What should the return type be? `float`
- Function signature: `float calculateBMI(float weight, float height)`
- Call: `float bmi = calculateBMI(height, weight);`
- BMI categories: Underweight < 18.5, Normal 18.5-24.9, Overweight 25-29.9, Obese >= 30

**What you must never do:**
- Change the BMI calculation formula
- Forget to declare function before use
- Use wrong datatypes for parameters

---

## Question: Functions 3 - Print Value with Pointer

**Short Humorous Scenario:**
Martin wants to print a variable's memory address and value. *"I need a function that takes a pointer to an int and prints the address and value. Can you make this?"* he asks.

**What they currently know:**
- Pointers
- Function parameters (pointer types)
- Address-of operator `&`
- Dereference operator `*`
- Format specifier `%p` for addresses

**The Task:**

1. Define variable `int value = 101;` in `main`
2. Define function `void printValue(int *pval)` above `main`
3. In `printValue` function:
   - Implement the print function to show: `address: 0xF213d23, value: 101`
4. Call `printValue(&value)` from `main`
5. What information is passed to `printValue`?
6. Run the program

7. **PBL:** Martin asks: *"Can you modify this to also print the size of the pointer in bytes?"*

**Hints:**
- How to print a memory address: use `%p` format specifier
- How to dereference a pointer: use `*` (e.g., `*pval`)
- Pass address using `&`: `printValue(&value)`
- The information passed is the memory address (pointer value)

**What you must never do:**
- Pass the value instead of the address
- Forget to dereference in the function
- Use wrong format specifier for address

---

## Question: Patient 1 - Print Function (Call-by-Value)

**Short Humorous Scenario:**
Martin wants to organize his patient printing code. *"I have patient information to print, but it's all in main(). Can you make a function to handle this?"* he asks.

**What they currently know:**
- Function definition and declaration
- Function parameters (call-by-value)
- `printf` function
- Multiple parameters

**The Task:**

1. Define a function declaration and definition `printPatientInfo(...)`
2. Start slowly with 1 single parameter: `id` (lines 11-12)
3. Replace `printf` lines in `main` with `printPatientInfo` function calls
4. Note: `int main` should not contain any `printf` calls

Starting code:
```c
#include <stdio.h>
int main() {
    int id = 13;
    int age = 44;
    float weight = 80;
    float height = 1.80;
    printf("Patient Information:\n");
    /* Print patient information */
    printf("###\n");
    printf(" PatientID:\t%d\n", id);
    printf(" age:\t\t%d years\n", age);
    printf(" weight:\t%.1f kg\n", weight);
    printf(" height:\t%.2f m\n", height);
    return 0;
}
```

5. **PBL:** Martin asks: *"Can you add all patient parameters to the function and remove all printf from main?"*

**Hints:**
- Start with just `id` parameter first
- Then add `age`, `weight`, `height` one by one
- Function should contain all the printf statements
- Call: `printPatientInfo(id, age, weight, height);`

**What you must never do:**
- Leave any printf in main
- Forget function declaration
- Use wrong parameter order

---

## Question: Patient 2 - Multiple Patients with BMI

**Short Humorous Scenario:**
Martin wants to print multiple patients with BMI calculation. *"I have an array of patients. Can you use the print function and add BMI calculation?"* he asks.

**What they currently know:**
- Arrays
- Functions
- Loops
- BMI calculation

**The Task:**

1. Use `printPatientInfo` code from `patient1.c`
2. Create a function `calculateBMI` that calculates `bmi = weight / (height * height)`
3. Modify `printPatientInfo` to print BMI

Starting code:
```c
#include <stdio.h>
int main() {
    int ids[] = {1, 3, 52, 23};
    int ages[] = {13, 44, 51, 100};
    float weights[] = {80, 99, 100, 50};
    float heights[] = {1.80, 1.62, 1.30, 1.74};
    int number_of_patients = sizeof(ids) / sizeof(ids[0]);
    printf("Patient Information for %d patients\n", number_of_patients);
    for (int i = 0; i < number_of_patients; i++) {
        /* Print patient information */
        printf("###\n");
        printf(" PatientID:\t%d\n", ids[i]);
        printf(" age:\t\t%d years\n", ages[i]);
        printf(" weight:\t%.1f kg\n", weights[i]);
        printf(" height:\t%.2f m\n", heights[i]);
    }
    return 0;
}
```

4. **PBL:** Martin asks: *"Can you also print the BMI category for each patient?"*

**Hints:**
- Remember function declaration and definition of `printPatientInfo`
- Calculate BMI: `bmi = calculateBMI(heights[i], weights[i])`
- Print BMI with: `printf(" BMI:\t\t%.1f\n", bmi);`

**What you must never do:**
- Calculate BMI in main
- Forget to call calculateBMI
- Forget to print BMI

---

## Question: Records Display - Call-by-Reference

**Short Humorous Scenario:**
Martin wants to print struct data using a function. *"I have a Record struct with id, date, notes, and measurement. Can you make a function that prints it?"* he asks.

**What they currently know:**
- Struct definition
- Function parameters (call-by-reference)
- `ctime()` function for date formatting
- Pointers to structs

**The Task:**

1. Define a struct template for `Record` containing:
   - `id`: integer
   - `dato`: `time_t`
   - `notes`: 100 char string
   - `measurement`: float
2. Create function declaration and definition `print_record(Record *)` (call-by-reference)
3. The function should:
   - Print a readable date from `dato` (see `ctime(t)`)
   - Example output for 1594974180: `date: Fri Jul 17 10:23:00 2020`
   - Print all other information
4. In `main`, define:
   ```c
   struct Record rec = {131, 1594974180, "Measurement recorded without issues", 93.3};
   ```
5. Call `print_record` with `rec` as call-by-reference
6. Run the program

7. **PBL:** Martin asks: *"Can you extend this to print multiple records from an array?"*

**Hints:**
- Pass struct address: `&rec` or `&rec`
- Use `ctime(&record.dato)` to get readable date
- Include `time.h` for `ctime()`
- Function signature: `void print_record(struct Record *r)`

**What you must never do:**
- Pass struct by value (makes a copy)
- Forget to include time.h
- Forget & when passing struct

---

## Question: Patient 3 - Statistics Functions

**Short Humorous Scenario:**
Martin wants to calculate statistics for multiple patients. *"I need mean and standard deviation functions. Can you make them reusable?"* he asks.

**What they currently know:**
- Arrays
- Functions
- Loops
- Statistical formulas
- Math library

**The Task:**

1. Write function `printStatistics(char* measurement, float gennemsnit, float afvigelse)` - it should print measurement, mean, and std
2. Write function `float mean(float x[], int n)` - calculates mean $\mu = \frac{1}{N} \sum\_{t=0}^{n-1} x_t$
3. Write function `float std(float x[], int n)` - calculates std $\sigma = \sqrt{\frac{1}{N-1} \sum\_{t=0}^{n-1} (x_t - \mu)^2}$
4. Write and use `printStatistics` function

Starting code:
```c
#include <stdio.h>
int main() {
    int ages[] = {13, 44, 51, 100};
    float weights[] = {80, 99, 100, 50};
    float heights[] = {1.80, 1.62, 1.30, 1.74};
    int number_of_patients = sizeof(ages) / sizeof(ages[0]);
    printf("Patient Descriptives for %i Patients\n", number_of_patients);
    return 0;
}
```

5. **PBL:** Martin asks: *"Can you modify this to calculate and print statistics for all three measurements (age, weight, height) in one loop?"*

**Hints:**
- You've made these equations before
- Mean: $\mu = \frac{1}{N} \sum x_t$
- Std: $\sigma = \sqrt{\frac{1}{N-1} \sum (x_t - \mu)^2}$
- Need to include `<math.h>` for `sqrt()`

**What you must never do:**
- Use N instead of N-1 for std
- Forget to include math.h
- Calculate mean/std incorrectly
