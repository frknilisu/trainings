#include "String.h"

#include <cstring>
#include <utility>

String::String(const char* s) : m_data(new char[strlen(s) + 1])
{
    memcpy(m_data, s, strlen(s) + 1);
}

String::String(const String& str) : String(str.m_data)
{
}

String::String(String&& str) noexcept : m_data(str.m_data)
{
    str.m_data = nullptr;
}

String::~String() 
{ 
    delete[] m_data;
}

String& String::operator = (const String& str)
{
    if (this != &str)
    {
        delete[] m_data;
        m_data = new char[strlen(str.m_data) + 1];
        memcpy(m_data, str.m_data, strlen(str.m_data) + 1);
    }

    return *this;
}

String& String::operator = (String&& str) noexcept
{
    std::swap(m_data, str.m_data);
    return *this;
}

const char* String::data() const
{
    return m_data;
}