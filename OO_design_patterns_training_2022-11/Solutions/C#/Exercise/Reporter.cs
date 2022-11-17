using System.Collections.Generic;

namespace TestApp1
{
    public abstract class Reporter
    {
        public string OutputDir { get; set; }

        protected abstract void CreateDataFile(List<string> data);
        protected abstract void CreateFooterFile();
        protected abstract void CreateHeaderFile();

        public void CreateReport(List<string> data)
        {
            CreateHeaderFile();
            CreateDataFile(data);
            CreateFooterFile();
        }
    }
}
