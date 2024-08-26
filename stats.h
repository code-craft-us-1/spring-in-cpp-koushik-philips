#include <vector>

namespace Statistics 
{
    // define the Stats structure here. See the tests to infer its properties
    struct Stats
    {
        double average;
        double max;
        double min;

        Stats() = default;
        ~Stats() = default;
    };
    
    Stats ComputeStatistics(const std::vector<double>& );
}
