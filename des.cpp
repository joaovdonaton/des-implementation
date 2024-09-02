#include "des.hpp"
#include "tables.hpp"

// returns 2^k
// only goes up to 2^63, since uint64_t can only store 2^64-1
uint64_t powOf2(int k){
    return uint64_t(1)<<k;
}

std::bitset<64> DES::bitPermutation(const std::bitset<64> &block, int* pt){
    std::bitset<64> result(0);

    int i = 0;
    while(i != 64){
        //std::cout << "at position " << *(pt+i)-1 << " value is " << block.test(64-*(pt+i)) << std::endl;
        result.set(64-1-i, block.test(64-*(pt+i))); 

        ++i;
    }

    return result;
}