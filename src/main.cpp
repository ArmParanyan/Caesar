#include <iostream>

#include "../header/Caesar.h"

int main()
{
    Caesar obj;
    std::string text = "Armen";
    std::string text2 = "Duphq";
    
    std::cout << obj.encode(text) << std::endl;
    std::cout << obj.decode(text2) << std::endl;
    return 0;
}