#include "rand.h"

T_UINT32 lfsr;
T_UINT32 bit;

void init_rand(T_UINT32 seed)
{
	lfsr = seed;
}

T_UINT32 rand(T_UINT32 max)
{
	/* taps: feedback polynomial */
    bit  = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5) ^ (lfsr >> 7) ^ (lfsr >> 9) ^ (lfsr >> 11) ^ (lfsr >> 13) ^ (lfsr >> 15) ) & 1;
    lfsr =  (lfsr >> 1) | (bit << 15) | (bit << 30) | (bit << 21);

    return (lfsr % max);
}
