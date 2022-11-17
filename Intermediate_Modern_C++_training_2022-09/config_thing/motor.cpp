#include "motor.h"

#include <iostream>

Motor::Motor(IConfig* settings) : m_settings(settings)
{
    std::cout << "I'm a motor!" << std::endl;
}

bool Motor::turn_rotor() const
{

    int value = m_settings->get_setting_int("motor_speed");

    std::cout << "Start turing at " << value << " speed" << std::endl;

    return true;
}
