

#include <iostream>
#include <iomanip>
#include "rational.hpp"

int main() {
    
    Rational rat1(1, 4);
    Rational rat2(1, 2);
    
    std::cout << rat1 << std::endl;
    std::cout << rat2 << std::endl;
    
    std::cout << rat1 + rat2 << std::endl;
    
    std::cout << std::boolalpha << (rat1 != rat2) << std::endl;
    
    std::cout << std::boolalpha << (rat1 < rat2) << std::endl;
    
    std::cout << rat1 << std::endl;
    
    

    return 0;
}
