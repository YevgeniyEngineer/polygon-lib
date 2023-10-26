#include <cmath>

namespace polygon_lib
{
struct PointXY final
{
    double x{0.0};
    double y{0.0};

    static constexpr double EPSILON = 1e-12;

    // Equality operator
    inline bool operator==(const PointXY &p) const noexcept
    {
        return (std::fabs(x - p.x) < EPSILON) && (std::fabs(y - p.y) < EPSILON);
    }

    // Inequality operator
    inline bool operator!=(const PointXY &p) const noexcept
    {
        return (std::fabs(x - p.x) > EPSILON) || (std::fabs(y - p.y) > EPSILON);
    }

    // Less than operator
    inline bool operator<(const PointXY &p) const noexcept
    {
        if (std::fabs(x - p.x) < EPSILON)
        {
            return y < p.y;
        }
        return x < p.x;
    }

    // Greater than operator
    inline bool operator>(const PointXY &p) const noexcept
    {
        if (std::fabs(x - p.x) < EPSILON)
        {
            return y > p.y;
        }
        return x > p.x;
    }

    // Less than or equal operator
    inline bool operator<=(const PointXY &p) const noexcept
    {
        if (std::fabs(x - p.x) < EPSILON)
        {
            return (y < p.y) || (std::fabs(y - p.y) < EPSILON);
        }
        return x < p.x;
    }

    // Greater than or equal operator
    inline bool operator>=(const PointXY &p) const noexcept
    {
        if (std::fabs(x - p.x) < EPSILON)
        {
            return (y > p.y) || (std::fabs(y - p.y) < EPSILON);
        }
        return x > p.x;
    }
};
}