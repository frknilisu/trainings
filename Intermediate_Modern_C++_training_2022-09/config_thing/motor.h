#pragma once

#include "IConfig.h"

class Motor
{
public:
    explicit Motor(IConfig*);
    ~Motor() = default;
    Motor(const Motor&) = delete;
    bool turn_rotor() const;
private:
    IConfig* m_settings;

};
