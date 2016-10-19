#include <stdio.h>
#include <stdlib.h>

#include "math.h"

int main(int argc, char** argv)
{
	T_UINT32 base  = 12;
	T_UINT32 power = 6;

	printf(" %lu^%lu = %lu\n\n", base, power, pow(base,power));

	printf(" factorial of %lu = %lu\n", base, fatorial(base));

	return 0;
}