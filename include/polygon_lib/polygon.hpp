#include "point_xy.hpp"

#include <algorithm>
#include <cstdint>
#include <limits>
#include <vector>

namespace polygon_lib
{
enum class ContourType
{
    OPEN = 0,
    CLOSED
};

enum class Orientation
{
    ANTICLOCKWISE = 0,
    CLOCKWISE,
    COLLINEAR,
    SINGULAR
};

struct Polygon final
{
    Polygon(std::size_t reserve_size = 0U)
    {
        if (reserve_size > 0U)
        {
            points.reserve(reserve_size);
        }
    }

    std::vector<PointXY> points{};
    ContourType contour_type{ContourType::OPEN};
    Orientation orientation{Orientation::ANTICLOCKWISE};
};
} // namespace polygon_lib