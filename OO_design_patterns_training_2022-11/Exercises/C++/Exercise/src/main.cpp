#include "TextReporter.h"

#include <OverlyIntricateDataGenerator.h>

#include <algorithm>
#include <chrono>
#include <iostream>

using DataGenerator::DataGenerationComplexity;
using DataGenerator::DataGenerationSpeed;
using DataGenerator::OverlyIntricateDataGenerator;

static std::string ReverseText(const std::string& text)
{
    return std::string{text.rbegin(), text.rend()};
}

int main()
{
    OverlyIntricateDataGenerator dataSource;
    dataSource.Initialize(std::to_string(std::chrono::system_clock::to_time_t(std::chrono::system_clock::now())));
    dataSource.SetDataGenerationComplexity(DataGenerationComplexity::Intricate);
    dataSource.SetDataGenerationSpeed(DataGenerationSpeed::Mega);

    auto data = dataSource.CreateSeptupleTemporalSpacing();

    bool optionChosen = false;
    while (!optionChosen)
    {
        std::cout << "You have obtained the data. Do you want to (o)rder it, (r)everse each element, or both? Options are \"o\", \"r\", \"or\", or \"ro\"" << std::endl;
        std::string userInput;
        std::cin >> userInput;
        optionChosen = true;
        if (userInput == "r")
        {
            for (size_t i = 0; i < data.size(); i++)
            {
                data[i] = ReverseText(data[i]);
            }
        }
        else if (userInput == "o")
        {
            std::sort(data.begin(), data.end());
        }
        else if (userInput == "ro")
        {
            for (size_t i = 0; i < data.size(); i++)
            {
                data[i] = ReverseText(data[i]);
            }
            std::sort(data.begin(), data.end());
        }
        else if (userInput == "or")
        {
            std::sort(data.begin(), data.end());
            for (size_t i = 0; i < data.size(); i++)
            {
                data[i] = ReverseText(data[i]);
            }
        }
        else
        {
            std::cout << "Unknow option. Please try again." << std::endl;
            optionChosen = false;
        }
    }

    TextReporter report{"Somewhere/On/This/Pc"};

    report.CreateHeaderTextFile();
    report.CreateFooterTextFile();
    report.CreateDataTextFile(data);

    return 0;
}