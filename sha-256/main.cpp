#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

#include "sha-256.h"

void print_byte_buffer(BYTE* buf)
{
	for(int i=0; i<32;i++)
	{
		printf("%x", buf[i]);
	}
	printf("\n");
}

int main(int argc, char** argv)
{
	BYTE str[] = {"My SHA Lib"};
	BYTE outBuff[SHA256_BLOCK_SIZE];

	compute_sha_256(str,strlen((char*)str),outBuff);

	print_byte_buffer(outBuff);

	return 0;
}