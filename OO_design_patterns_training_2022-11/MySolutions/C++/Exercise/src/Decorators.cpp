#include "Decorators.h"

#include <algorithm>

std::vector<std::string> ReverseDecorator::GetData() const
{
    auto data = Decorator::GetData();
    for (size_t i = 0; i < data.size(); i++)
    {
        data[i] = ReverseText(data[i]);
    }
    return data;
}

std::string ReverseDecorator::ReverseText(const std::string& text)
{
    return std::string{text.rbegin(), text.rend()};
}

std::vector<std::string> OrderDecorator::GetData() const
{
    auto data = Decorator::GetData();
    std::sort(data.begin(), data.end());
    return data; 
}

std::vector<std::string> FilterDecorator::GetData() const
{
    auto data = Decorator::GetData();
    data.erase(std::remove_if(data.begin(), data.end(), [](const std::string& str){ return str.find("es") != std::string::npos; }), data.end());
    return data;
}
