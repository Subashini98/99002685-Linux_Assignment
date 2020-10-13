#include "bitmask.h"
int flipBit(int n, int k)
{
    return (n ^ (1 << (k - 1)));
} 
int resetBit(int n, int k)
{
    return (n & (~(1 << (k - 1))));
} 

int setBit(int n, int k)
{
    return (n | (1 << (k - 1)));
} 
