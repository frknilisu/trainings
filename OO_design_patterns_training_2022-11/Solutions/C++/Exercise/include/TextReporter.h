#ifndef TEXT_REPORTER_H
#define TEXT_REPORTER_H

#include "Reporter.h"

class TextReporter : public Reporter
{
public:
    explicit TextReporter(const std::string& outputDir) : Reporter(outputDir) {}
protected:
    virtual void CreateHeaderFile() const override;
    virtual void CreateDataFile(const std::vector<std::string>& data) const override;
    virtual void CreateFooterFile() const override;
};

#endif