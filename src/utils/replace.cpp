#include <stdio.h>
#include <memory.h>
#include "replace.h"

void	MCmemcpy(void *Dst,void *Src,int Length)
{
    memcpy(Dst, Src, Length);
}