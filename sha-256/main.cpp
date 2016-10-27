#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

#include "sha-256.h"

void print_byte_buffer(BYTE* buf)
{
	for(int i=0; i<32;i++)
	{
		printf("%02X", buf[i]);
	}
	printf("\n");
}

int main(int argc, char** argv)
{
	
	if(argc < 2)
	{
		printf("error!!!\n\n\t\t./sha <message>\n\n");
		return 1;
	}

	int strlenght = strlen(argv[1]);
	BYTE outBuff[SHA256_BLOCK_SIZE];

	compute_sha_256((BYTE*)argv[1],strlenght,outBuff);

	print_byte_buffer(outBuff);

	return 0;
}