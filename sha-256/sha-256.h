/**
 *
 * @file sha-256.h
 * @ingroup 
 * @brief sha-256 hash function Header File
 * @author Tiago Vasconcelos
 * @date 27-10-2016
 *
 */

#ifndef __SHA_256_H__
#define __SHA_256_H__

/****************************** MACROS ******************************/
#define SHA256_BLOCK_SIZE 		32 // SHA256 outputs a 32 byte digest

#define SHA256_CTX_DATA_SIZE	64
#define SHA256_CTX_STATE_SIZE	8

/**************************** DATA TYPES ****************************/
typedef unsigned char BYTE;             // 8-bit byte
typedef unsigned int  WORD; // 32-bit word, change to "long" for 16-bit machines


typedef struct {
	BYTE 				data[SHA256_CTX_DATA_SIZE];
	WORD 				datalen;
	unsigned long long 	bitlen;
	WORD 				state[SHA256_CTX_STATE_SIZE];
} SHA256_CTX;

/******************** PUBLIC FUNCTION DECLARATIONS ******************/
void compute_sha_256(BYTE* inputArray, int inputArraySize, BYTE* outputArray);

#endif // sha-256.h
