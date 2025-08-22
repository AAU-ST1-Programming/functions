#include <stdio.h> /* printf */
int main(){
    int *p_var;
    int var1 = 131;
    int var2 = 0x315F;

    p_var = &var1;
    p_var = &var2;

    printf("Value of the variable p_var is pointing to: %i\n", *p_var);

    return 0;
}
