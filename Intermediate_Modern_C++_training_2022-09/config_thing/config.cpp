#include "config.h"

#include <fstream>
#include <iostream>
#include <stdexcept>

Config::Config()
{
    std::ifstream config_file;
    config_file.open("config.ini");

    if (!config_file.is_open()) throw std::runtime_error("Config file missing");

    std::string config_line;
    while (std::getline(config_file, config_line))
    {
        std::size_t pos = config_line.find("=");
        std::string config_key = config_line.substr(0, pos);
        std::string config_value = config_line.substr(pos+1, config_line.size());

        m_settings[config_key] = config_value;
    }
}

int Config::get_setting_int(const std::string& key) const
{
    std::string value = m_settings.find(key)->second;
    return std::stoi(value);
}

std::string Config::get_setting_string(const std::string& key) const
{
    std::string value = m_settings.find(key)->second;
    return value;
}
