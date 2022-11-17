using OverlyIntricateDataSource;
using System;
using System.Linq;

namespace TestApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            var dataSource = new OverlyIntricateDataGenerator();
            dataSource.Initialize(DateTime.Now.ToLongDateString().GetHashCode().ToString());
            dataSource.SetDataGenerationComplexity(DataGenerationComplexity.Intricate);
            dataSource.SetDataGenerationSpeed(DataGenerationSpeed.Mega);

            var data = dataSource.CreateSeptupleTemporalSpacing().ToList(); 

            var optionChosen = false;
            while (!optionChosen)
            {
                Console.WriteLine("You have obtained the data. Do you want to (o)rder it, (r)everse each element, or both? Options are \"o\", \"r\", \"or\", or \"ro\"");
                var userInput = Console.ReadLine();
                optionChosen = true;
                switch (userInput)
                {
                    case "r":
                        for (var i = 0; i < data.Count; i++)
                        {
                            data[i] = ReverseText(data[i]);
                        }
                        break;

                    case "o":
                        data.Sort();
                        break;

                    case "ro":
                        for (var i = 0; i < data.Count; i++)
                        {
                            data[i] = ReverseText(data[i]);
                        }
                        data.Sort();
                        break;

                    case "or":
                        data.Sort();
                        for (var i = 0; i < data.Count; i++)
                        {
                            data[i] = ReverseText(data[i]);
                        }
                        break;

                    default:
                        Console.WriteLine("Unknow option. Please try again.");
                        optionChosen = false;
                        break;
                }
            }

            var report = new TextReporter
            {
                OutputDir = "Somewhere/On/This/Pc"
            };
            report.CreateHeaderTextFile();
            report.CreateFooterTextFile();
            report.CreateDataTextFile(data);
            
            Console.ReadKey();
        }

        private static string ReverseText(string text)
        {
            char[] array = text.ToCharArray();
            Array.Reverse(array);
            return new string(array);
        }
    }
}
