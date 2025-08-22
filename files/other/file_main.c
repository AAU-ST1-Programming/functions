#include <stdio.h>
/* file_main.c */
#include "file_other.h"

// fuction declaration
int fcn_plus1000(int n);

int main()
{
	printf("file_main.c>>main: g_value=%d\n", g_value);
	printf("fcn_plus1000(value)=%d\n", fcn_plus1000(g_value));

	FO_printValue(15);
	return 0;
}

int fcn_plus1000(int n)
{
	return n + 1000;
}