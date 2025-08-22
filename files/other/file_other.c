/* my_own_file2.c */
#include <stdio.h>
#include "file_other.h"

int g_value = 1000;

void FO_printValue(int value)
{
	printf("From file_other.c>>FO_printValue: value=%d\n", value);
}