#include "Reporter.h"

void Reporter::CreateReport(const std::vector<std::string>& data) const
{
    CreateHeaderFile();
    CreateFooterFile();
    CreateDataFile(data);
}