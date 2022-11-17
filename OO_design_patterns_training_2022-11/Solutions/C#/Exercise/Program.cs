using Exercise;
using System;

namespace TestApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            var dataSource = new DataSourceAdapter();
            var data = dataSource.GetData();
            Component component = new ConcreteComponent(data);

            var optionChosen = false;
            while (!optionChosen)
            {
                Console.WriteLine("You have obtained the data. Do you want to (o)rder it, (r)everse each element, or filter(f)? All combinations are possible.");
                var userInput = Console.ReadLine();
                optionChosen = true;

                foreach (char c in userInput)
                {
                    switch (c)
                    {
                        case 'r':
                            component = new ReverseDecorator(component);
                            break;

                        case 'o':
                            component = new OrderDecorator(component);
                            break;

                        case 'f':
                            component = new FilterDecorator(component);
                            break;

                        default:
                            Console.WriteLine("Unknow option '{0}'. Please try again.", c);
                            optionChosen = false;
                            component = new ConcreteComponent(data);
                            break;
                    }
                }
            }

            var textReport = new TextReporter
            {
                OutputDir = "Somewhere/On/This/Pc"
            };

            textReport.CreateReport(component.GetData());
            
            var xmlReport = new XmlReporter
            {
                OutputDir = "Somewhere/On/This/Pc"
            };

            xmlReport.CreateReport(component.GetData());

            Console.ReadKey();
        }
    }
}
