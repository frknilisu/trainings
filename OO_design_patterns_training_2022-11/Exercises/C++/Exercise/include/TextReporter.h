#ifndef TEXT_REPORTER_H
#define TEXT_REPORTER_H

#include <string>
#include <vector>

class TextReporter
{
public:
    explicit TextReporter(const std::string& outputDir) : _outputDir(outputDir) {}
    void CreateDataTextFile(const std::vector<std::string>& data) const;
    void CreateFooterTextFile() const;
    void CreateHeaderTextFile() const;
private:
    std::string _outputDir;
};

#endif