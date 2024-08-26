#include "stats.h"
#include <algorithm>
#include <numeric>
#include <limits>

Statistics::Stats Statistics::ComputeStatistics(const std::vector<double>& vec)
{
    //Implement statistics here
    Stats statsObj;
    statsObj.average = vec.empty() ? std::numeric_limits<double>::quiet_NaN() : (std::accumulate(vec.begin(), vec.end(), 0.0) / vec.size());

    statsObj.max = vec.empty() ? std::numeric_limits<double>::quiet_NaN() : (*std::max_element(vec.begin(), vec.end()));

    statsObj.min = (std::min_element(vec.begin(), vec.end()) != std::end(vec)) ? 
                   (*std::min_element(vec.begin(), vec.end())) : std::numeric_limits<double>::quiet_NaN();

    return statsObj;
}
