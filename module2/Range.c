#include <stdio.h>
#include <limits.h>
#include <float.h>

void main(int argc, char const *argv[]) {
	printf("char range is %d to %d \n", CHAR_MIN, CHAR_MAX);
	printf("INT range is %d to %d \n", INT_MIN, INT_MAX);
	printf("FLOAT range is %d to %d \n", -FLT_MAX, FLT_MAX);
	printf("LONG range is %d to %d \n", LONG_MIN, LONG_MAX);
	printf("DOUBLE range is %d to %d \n", -DBL_MAX, DBL_MAX);
}