#include <stdio.h>

char factorial_iterative(unsigned char N)
{
  char product = 1;
  for ( int j=1; j<=N; j++ )
    product *= j;
  return product;
}

char factorial_rekursive(unsigned char N) 
{
   if(N <= 1) 
   {
      return 1;
   }
   return N * factorial_rekursive(N - 1);
}

void main() 
{
char N = 100;
  for ( int n = 0; n < N; n++)
  {
      printf("Iterative Factorial of %d is %ld\n", n, factorial_iterative(n));
      printf("Rekursive Factorial of %d is %ld\n", n, factorial_rekursive(n));
  }
}