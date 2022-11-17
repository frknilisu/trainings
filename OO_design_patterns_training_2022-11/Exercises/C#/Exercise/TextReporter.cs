using System;
using System.Collections.Generic;

namespace TestApp1
{
    public class TextReporter
    {
        public string OutputDir { get; set; }

        public void CreateDataTextFile(List<string> data)
        {
            Console.WriteLine("Data written as text file:");
            foreach (var item in data)
            {
                Console.WriteLine(item);
            }
        }

        public void CreateFooterTextFile()
        {
            Console.WriteLine($"Wrote an imaginary footer as a text file to {OutputDir}");
        }

        public void CreateHeaderTextFile()
        {
            Console.WriteLine($"Wrote an imaginary header as a text file to {OutputDir}");
        }
    }
}
