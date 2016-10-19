#ifndef __RAND_H__
#define __RAND_H__

typedef unsigned long int T_UINT32;

void init_rand(T_UINT32 seed);

T_UINT32 rand(T_UINT32 max);

#endif