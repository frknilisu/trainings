#include "TextReporter.h"
#include "XmlReporter.h"
#include "DataSourceAdapter.h"
#include "Decorators.h"

#include <iostream>

int main()
{
    DataSourceAdapter dataSource;

    auto data = dataSource.GetData();
    std::unique_ptr<Component> component = std::make_unique<ConcreteComponent>(data);

    bool optionChosen = false;
    while (!optionChosen)
    {
        std::cout << "You have obtained the data. Do you want to (o)rder it, (r)everse each element, or filter(f)? All combinations are possible." << std::endl;
        std::string userInput;
        std::cin >> userInput;
        optionChosen = true;

        for(char c: userInput)
        {
            switch (c)
            {
                case 'r':
                    component = std::make_unique<ReverseDecorator>(std::move(component));
                    break;
                
                case 'o':
                    component = std::make_unique<OrderDecorator>(std::move(component));
                    break;

                case 'f':
                    component = std::make_unique<FilterDecorator>(std::move(component));
                    break;
                
                default:
                    std::cout << "Unknown option '" << c << "'. Please try again." << std::endl;
                    optionChosen = false;
                    component = std::make_unique<ConcreteComponent>(data);
                    break;
            }
        }
    }

    TextReporter textReport{"Somewhere/On/This/Pc"};
    textReport.CreateReport(component->GetData());

    XmlReporter xmlReporter{"Somewhere/On/This/Pc"};
    xmlReporter.CreateReport(component->GetData());

    return 0;
}