#include "geometry.hpp"

namespace polygon_lib
{
constexpr double crossProduct(const PointXY &p1, const PointXY &p2, const PointXY &p3) noexcept
{
    return (p2.x - p1.x) * (p3.y - p1.y) - (p3.x - p1.x) * (p2.y - p1.y);
}

constexpr double dotProduct(const PointXY &v1, const PointXY &v2) noexcept
{
    return (v1.x * v2.x) + (v1.y * v2.y);
}

constexpr double euclideanDistanceSquared(const PointXY &p1, const PointXY &p2) noexcept
{
    const auto dx = p1.x - p2.x;
    const auto dy = p1.y - p2.y;

    return (dx * dx) + (dy * dy);
}

constexpr double euclideanDistance(const PointXY &p1, const PointXY &p2) noexcept
{
    return std::sqrt(euclideanDistanceSquared(p1, p2));
}
} // namespace polygon_lib