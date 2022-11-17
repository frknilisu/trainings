using OverlyIntricateDataSource;
using System;
using System.Collections.Generic;
using System.Linq;

namespace Exercise
{
    class DataSourceAdapter
    {
        private readonly OverlyIntricateDataGenerator m_dataGenerator;

        public DataSourceAdapter()
        {
            m_dataGenerator = CreateDataSource();
        }

        public List<string> GetData()
        {
            return m_dataGenerator.CreateSeptupleTemporalSpacing().ToList();
        }

        private static OverlyIntricateDataGenerator CreateDataSource()
        {
            var dataSource = new OverlyIntricateDataGenerator();
            dataSource.Initialize(DateTime.Now.ToLongDateString().GetHashCode().ToString());
            dataSource.SetDataGenerationComplexity(DataGenerationComplexity.Intricate);
            dataSource.SetDataGenerationSpeed(DataGenerationSpeed.Mega);
            return dataSource;
        }
    }
}
