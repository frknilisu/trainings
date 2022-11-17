#ifndef XML_REPORTER_H
#define XML_REPORTER_H

#include "Reporter.h"

class XmlReporter : public Reporter
{
public:
    explicit XmlReporter(const std::string& outputDir) : Reporter(outputDir) {}
protected:
    virtual void CreateHeaderFile() const override;
    virtual void CreateDataFile(const std::vector<std::string>& data) const override;
    virtual void CreateFooterFile() const override;
};

#endif