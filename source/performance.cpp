#include "performance.h"

namespace emt
{
    performance_timer::performance_timer()
    {
    }

    void performance_timer::start()
    {
        m_start = std::chrono::high_resolution_clock::now();

    }

    void performance_timer::stop()
    {
        m_end = std::chrono::high_resolution_clock::now();
    }

    float performance_timer::elapsed()
    {
        return std::chrono::duration<float, std::milli>(m_end - m_start).count();
    }

    float performance_timer::elapsed_micro()
    {
        return std::chrono::duration<float, std::micro>(m_end - m_start).count();
    }

    void performance_timer::reset()
    {
        m_start = m_end = std::chrono::high_resolution_clock::now();
    }

} // namespace emt
