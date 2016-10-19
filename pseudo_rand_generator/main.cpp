#include <stdio.h>
#include <stdlib.h>

#include "rand.h"

int main(int argc, char** argv)
{
	//init_rand(0xCAFECAFE);
	init_rand(0x01);

	for(int i=0; i < atoi(argv[1]); i++)
	{
		printf("%x\n",(unsigned int)rand(100));
	}

	return 0;
}
