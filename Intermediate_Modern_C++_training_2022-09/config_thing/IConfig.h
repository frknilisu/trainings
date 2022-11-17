#pragma once

#include <map>
#include <string>

class IConfig
{
public:
    virtual int get_setting_int(const std::string& key) const = 0;
    virtual std::string get_setting_string(const std::string& key) const = 0;
};
