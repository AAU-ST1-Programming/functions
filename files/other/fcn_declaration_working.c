#include <stdio.h>
/* Function declarations*/
void print_2_variables(int lvar, int rvar);

int main()
{
    int a = 76, b = 10;
    print_2_variables(a,b);
    return 0;
}

void print_2_variables(int lvar,int  rvar)
{
    /* Printes variables lvar,  and rvar*/
    printf("lvar(%d), rvar(%d)\n", lvar,rvar );
}