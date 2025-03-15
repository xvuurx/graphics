#pragma once

#include <chrono>

namespace emt
{
class performance_timer
{
public:
    performance_timer();

    void start();
    void stop();
    
    float elapsed();
    float elapsed_micro();

    void reset();

private:
    std::chrono::high_resolution_clock::time_point m_start;
    std::chrono::high_resolution_clock::time_point m_end;
};
} // namespace emt
