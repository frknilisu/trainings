#ifndef DATA_SOURCE_ADAPTER_H
#define DATA_SOURCE_ADAPTER_H

#include <OverlyIntricateDataGenerator.h>

using DataGenerator::OverlyIntricateDataGenerator;

class DataSourceAdapter
{
public:
    std::vector<std::string> GetData() const;

private:
    static OverlyIntricateDataGenerator CreateDataSource();

    OverlyIntricateDataGenerator _dataGenerator = CreateDataSource();
};

#endif