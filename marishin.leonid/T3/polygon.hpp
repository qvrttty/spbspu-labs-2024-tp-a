#ifndef POLYGON_HPP
#define POLYGON_HPP

#include <iostream>
#include <vector>

namespace marishin
{
  struct Point
  {
    int x, y;
    bool operator<(const Point& data) const;
    bool operator>(const Point& data) const;
    bool operator<=(const Point& data) const;
    bool operator>=(const Point& data) const;
    bool operator==(const Point& data) const;
  };
  std::istream& operator>>(std::istream& in, Point& point);
  std::ostream& operator<<(std::ostream& out, const Point& point);
  struct Polygon
  {
    std::vector< Point > points;
    double getArea() const;
  };
  std::istream& operator>>(std::istream& in, Polygon& point);
  std::ostream& operator<<(std::ostream& out, const Polygon& point);
  bool operator==(const Polygon& first, const Polygon& second);

  struct PolygonArea
  {
    marishin::Point first;
    double operator()(double area, const marishin::Point& second, const marishin::Point& third);
  };
}

#endif
