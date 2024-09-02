#include <iostream>
#include "des.hpp"
#include "tables.hpp"

int main(){
    // 0123456789ABCDEF in hexadecimal (i.e 4 bits = 1 char)
    std::bitset<64> block("0000000100100011010001010110011110001001101010111100110111101111"); 

    DES des;
    auto r = des.bitPermutation(block, initialPermutation);

    std::cout << r << std::endl;

    return 0;
}