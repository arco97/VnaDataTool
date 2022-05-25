#include "../vnadatatool.h"
#include <iostream>
int main(){
    std::cout<<"Hallo World"<<std::endl;
    touchstone_t touch = TouchstoneV11::readFile("C://Users//hoehne_a//Desktop//ZV-Z210_MATCH(F)_1314.9004.00_101483.s1p");
    
    return 0;
}