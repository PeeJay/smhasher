#include "Types.h"

extern "C"
{
#include <xxhash.h>
}

void xxhash64 ( const void * key, int len, uint32_t seed, void * out )
{

  *(uint64_t*)out = XXH64(key, len, seed);
}

void xxhash32 ( const void * key, int len, uint32_t seed, void * out )
{

  *(uint32_t*)out = XXH32(key, len, seed);
}
