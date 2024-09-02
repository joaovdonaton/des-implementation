#include <iostream>
#include <bitset>
#include <cmath>

#ifndef DES_HEADER
#define DES_HEADER

class DES{
    public:
        // takes a 64 bit block and a permutation table
        // returns 64 bit block but permutated
        std::bitset<64> bitPermutation(const std::bitset<64>&, int*);

};

// helper functions
uint64_t powOf2(int k);

#endif