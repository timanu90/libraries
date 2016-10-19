#include "math.h"

T_UINT32 pow(T_UINT32 base, T_UINT32 power)
{
	if(power == 0){return 1;}
    if(power == 1){return base;}
    return base * pow(base,power-1);
}

T_UINT32 fatorial(T_UINT32 num)
{
    if(num == 0){return 1;}
    return num * fatorial(num-1);
}
