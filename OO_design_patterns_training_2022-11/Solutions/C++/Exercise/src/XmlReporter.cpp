#include "XmlReporter.h"

#include <iostream>

void XmlReporter::CreateDataFile(const std::vector<std::string>& data) const
{
    std::cout << "Data written as XML file:" << std::endl;
    for (const auto& item : data)
    {
        std::cout << item << std::endl;
    }
}

void XmlReporter::CreateFooterFile() const
{
    std::cout << "Wrote an imaginary footer as an XML file to " << OutputDir() << std::endl;
}

void XmlReporter::CreateHeaderFile() const
{
    std::cout << "Wrote an imaginary header as an XML file to " << OutputDir() << std::endl;
}
