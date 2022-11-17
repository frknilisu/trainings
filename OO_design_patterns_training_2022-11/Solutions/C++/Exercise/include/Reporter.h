#ifndef REPORTER_H
#define REPORTER_H

#include <string>
#include <vector>

class Reporter
{
public:
    explicit Reporter(const std::string& outputDir) : _outputDir(outputDir) {}
    void CreateReport(const std::vector<std::string>& data) const;
protected:
    virtual void CreateHeaderFile() const = 0;
    virtual void CreateDataFile(const std::vector<std::string>& data) const = 0;
    virtual void CreateFooterFile() const = 0;
    std::string OutputDir() const { return _outputDir; }
private:
    std::string _outputDir;
};

#endif