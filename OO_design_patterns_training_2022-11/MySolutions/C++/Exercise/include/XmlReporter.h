#ifndef XML_REPORTER_H
#define XML_REPORTER_H

#include "Reporter.h"

class XmlReporter: public Reporter
{
public:
    explicit XmlReporter(const std::string& outputDir) : Reporter(outputDir) {}
protected:
    void CreateHeaderFile() const override;
    void CreateDataFile(const std::vector<std::string>& data) const override;
    void CreateFooterFile() const override;
};

#endif