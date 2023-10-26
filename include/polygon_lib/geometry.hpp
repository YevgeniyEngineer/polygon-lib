#include "point_xy.hpp"

namespace polygon_lib
{
/// @brief Function to return the cross product of two vectors (p1, p2) and (p1, p3)
constexpr double crossProduct(const PointXY &p1, const PointXY &p2, const PointXY &p3) noexcept;

/// @brief Function to return the dot product of v1 and v2.
constexpr double dotProduct(const PointXY &v1, const PointXY &v2) noexcept;

/// @brief Function to calculate squared distance between two points (p1, p2)
constexpr double euclideanDistanceSquared(const PointXY &p1, const PointXY &p2) noexcept;

/// @brief Function to calculate  distance between two points (p1, p2)
constexpr double euclideanDistance(const PointXY &p1, const PointXY &p2) noexcept;
} // namespace polygon_lib