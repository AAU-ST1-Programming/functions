#include <stdio.h>

void print_array(int array[], int N, char *prefix);
void sort(int a[],int n);

int main() {
   int list[] = {11,82,42,61,4,31,25,22,72,94};
   int array_size = sizeof(list)/sizeof(list[0]);
   
   print_array(list,array_size,"Input:  ");
   sort(list,array_size);
   print_array(list,array_size,"Output: ");
   
   // Calculate and print the median value of list with a new function
   // ??????
   
   return 0;
}

void swap(int *p,int *q) {
   int t;
   
   t=*p; 
   *p=*q; 
   *q=t;
}
void sort(int a[],int n) { 
   int i,j,temp;

   for(i = 0;i < n-1;i++) {
      for(j = 0;j < n-i-1;j++) {
         if(a[j] > a[j+1])
            swap(&a[j],&a[j+1]);
      }
   }
}
void print_array(int array[], int N, char *prefix) {
    int i;
    printf(prefix);
    printf("[");
	
    // navigate through all items 
    for(i = 0; i < N - 1; i++) 
    {
        printf("%d ",array[i]);
    }
	printf("%d",array[i]);
    printf("]\n");
}