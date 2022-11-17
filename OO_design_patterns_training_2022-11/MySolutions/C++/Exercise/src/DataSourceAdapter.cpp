#include "DataSourceAdapter.h"

#include <chrono>

using DataGenerator::DataGenerationComplexity;
using DataGenerator::DataGenerationSpeed;
using DataGenerator::OverlyIntricateDataGenerator;

std::vector<std::string> DataSourceAdapter::GetData() const
{
    return _dataGenerator.CreateSeptupleTemporalSpacing();
}

OverlyIntricateDataGenerator DataSourceAdapter::CreateDataSource()
{
    OverlyIntricateDataGenerator dataSource;
    dataSource.Initialize(std::to_string(std::chrono::system_clock::to_time_t(std::chrono::system_clock::now())));
    dataSource.SetDataGenerationComplexity(DataGenerationComplexity::Intricate);
    dataSource.SetDataGenerationSpeed(DataGenerationSpeed::Mega);

    return dataSource;
}