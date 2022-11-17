using System;
using System.Collections.Generic;

namespace TestApp1
{
    public class XmlReporter : Reporter
    {
        protected override void CreateDataFile(List<string> data)
        {
            Console.WriteLine("Data written as Xml file:");
            foreach (var item in data)
            {
                Console.WriteLine(item);
            }
        }

        protected override void CreateFooterFile()
        {
            Console.WriteLine($"Wrote an imaginary footer as an Xml file to {OutputDir}");
        }

        protected override void CreateHeaderFile()
        {
            Console.WriteLine($"Wrote an imaginary header as an Xml file to {OutputDir}");
        }
    }
}
