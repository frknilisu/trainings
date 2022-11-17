#include "TextReporter.h"

#include <iostream>

void TextReporter::CreateDataTextFile(const std::vector<std::string>& data) const
{
    std::cout << "Data written as text file:" << std::endl;
    for (const auto& item : data)
    {
        std::cout << item << std::endl;
    }
}

void TextReporter::CreateFooterTextFile() const
{
    std::cout << "Wrote an imaginary footer as a text file to " << _outputDir << std::endl;
}

void TextReporter::CreateHeaderTextFile() const
{
    std::cout << "Wrote an imaginary header as a text file to " << _outputDir << std::endl;
}
