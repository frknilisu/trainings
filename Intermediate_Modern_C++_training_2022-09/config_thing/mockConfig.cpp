#include "mockConfig.h"

#include <fstream>
#include <iostream>
#include <stdexcept>

MockConfig::MockConfig()
{
    m_settings["motor_speed"] = "42";
}

int MockConfig::get_setting_int(const std::string& key) const
{
    std::string value = m_settings.find(key)->second;
    return std::stoi(value);
}

std::string MockConfig::get_setting_string(const std::string& key) const
{
    std::string value = m_settings.find(key)->second;
    return value;
}