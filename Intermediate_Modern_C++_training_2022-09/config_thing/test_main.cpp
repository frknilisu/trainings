#include <iostream>

#include "mockConfig.h"
#include "motor.h"

int main()
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "Start testing!" << std::endl;
    
    Motor test_motor(new MockConfig());
    test_motor.turn_rotor();

    std::cout << "Done testing" << std::endl;

    return 0;
}
