#include "OverlyIntricateDataGenerator.h"

#include <chrono>
#include <stdexcept>

namespace DataGenerator
{

void OverlyIntricateDataGenerator::Initialize(const std::string& overlyIntricateSecretInput)
{
    auto expectedInput = std::to_string(std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()));

    if (overlyIntricateSecretInput != expectedInput)
    {
        throw std::invalid_argument("Failed to properly initialize the OverlyIntricateDataGenerator");
    }

    _initialized = true;
}

void OverlyIntricateDataGenerator::SetDataGenerationSpeed(DataGenerationSpeed speed)
{
    if (speed == DataGenerationSpeed::None)
    {
        throw std::invalid_argument("Speed must be higher than that!");
    }

    _dataGenerationSpeed = speed;
}

void OverlyIntricateDataGenerator::SetDataGenerationComplexity(DataGenerationComplexity complexity)
{
    if (complexity == DataGenerationComplexity::Simple)
    {
        throw std::invalid_argument("Complexity is insufficient!");
    }

    _dataGenerationComplexity = complexity;
}

bool OverlyIntricateDataGenerator::CheckIfReady() const
{
    return _initialized 
        && _dataGenerationSpeed != DataGenerationSpeed::None 
        && _dataGenerationComplexity != DataGenerationComplexity::Simple;
}

std::vector<std::string> OverlyIntricateDataGenerator::CreateSeptupleTemporalSpacing() const
{
    // arbitrary check to frustrate data generation.
    if (!_initialized)
    {
        throw std::logic_error("Failed to properly set all the parameters for temporal spacing.");
    }

    return {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
}

}