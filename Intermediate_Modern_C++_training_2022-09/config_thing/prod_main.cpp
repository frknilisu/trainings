#include <iostream>

#include "config.h"
#include "motor.h"

int main()
{
    std::cout << "Hello World!" << std::endl;
    
    Motor motor(new Config());
    motor.turn_rotor();

    std::cout << "Goodbye World!" << std::endl;
    return 0;
}
