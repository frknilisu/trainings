#pragma once

#include <map>
#include <string>
#include "IConfig.h"

class MockConfig : public IConfig
{
public:
    explicit MockConfig();
    int get_setting_int(const std::string& key) const override;
    std::string get_setting_string(const std::string& key) const override;
private:
    std::map<std::string, std::string> m_settings;
};
