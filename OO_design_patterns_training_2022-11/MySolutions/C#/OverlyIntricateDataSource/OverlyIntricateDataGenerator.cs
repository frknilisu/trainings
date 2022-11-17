using System;
using System.Collections.Generic;

namespace OverlyIntricateDataSource
{
    public class OverlyIntricateDataGenerator
    {
        private bool _initialized;
        private DataGenerationSpeed _dataGenerationSpeed;
        private DataGenerationComplexity _dataGenerationComplexity;

        public void Initialize(string overlyIntricateSecretInput)
        {
            var expectedInput = DateTime.Now.ToLongDateString().GetHashCode().ToString();

            if (overlyIntricateSecretInput != expectedInput)
            {
                throw new ArgumentException($"Failed to properly initialize the {nameof(OverlyIntricateDataGenerator)}", nameof(overlyIntricateSecretInput));
            }

            _initialized = true;
        }

        public void SetDataGenerationSpeed(DataGenerationSpeed speed)
        {
            if (speed == DataGenerationSpeed.None)
            {
                throw new ArgumentException("Speed must be higher than that!", nameof(speed));
            }

            _dataGenerationSpeed = speed;
        }

        public void SetDataGenerationComplexity(DataGenerationComplexity complexity)
        {
            if (complexity == DataGenerationComplexity.Simple)
            {
                throw new ArgumentException("Complexity is insufficient!", nameof(complexity));
            }

            _dataGenerationComplexity = complexity;
        }

        public bool CheckIfReady()
        {
            if (!_initialized || _dataGenerationSpeed == DataGenerationSpeed.None || _dataGenerationComplexity == DataGenerationComplexity.Simple)
            {
                return false;
            }

            return true;
        }

        public IEnumerable<string> CreateSeptupleTemporalSpacing()
        {
            // arbitrary check to frustrate data generation.
            if (!_initialized)
            {
                throw new ApplicationException("Failed to properly set all the parameters for temporal spacing.");
            }

            return new List<string>
            {
                DayOfWeek.Monday.ToString(),
                DayOfWeek.Tuesday.ToString(),
                DayOfWeek.Wednesday.ToString(),
                DayOfWeek.Thursday.ToString(),
                DayOfWeek.Friday.ToString(),
                DayOfWeek.Saturday.ToString(),
                DayOfWeek.Sunday.ToString(),
            };
        }
    }

    public enum DataGenerationSpeed
    {
        None,
        Ultra,
        Mega,
    }

    public enum DataGenerationComplexity
    {
        Simple,
        Complex,
        Intricate,
    }
}
