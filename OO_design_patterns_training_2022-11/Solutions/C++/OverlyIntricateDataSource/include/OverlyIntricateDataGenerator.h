#ifndef OVERLY_INTRICATE_DATA_GENERATOR_H
#define OVERLY_INTRICATE_DATA_GENERATOR_H

#include <string>
#include <vector>

namespace DataGenerator
{
    enum class DataGenerationSpeed
    {
        None,
        Ultra,
        Mega,
    };

    enum class DataGenerationComplexity
    {
        Simple,
        Complex,
        Intricate,
    };

    class OverlyIntricateDataGenerator
    {
    public:
        void Initialize(const std::string& overlyIntricateSecretInput);
        void SetDataGenerationSpeed(DataGenerationSpeed speed);
        void SetDataGenerationComplexity(DataGenerationComplexity complexity);

        bool CheckIfReady() const;
        std::vector<std::string> CreateSeptupleTemporalSpacing() const;
    private:
        bool _initialized = false;
        DataGenerationSpeed _dataGenerationSpeed = DataGenerationSpeed::None;
        DataGenerationComplexity _dataGenerationComplexity = DataGenerationComplexity::Simple;
    };
}

#endif
