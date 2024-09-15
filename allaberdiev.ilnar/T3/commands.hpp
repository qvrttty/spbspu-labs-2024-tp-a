#ifndef COMMANDS_HPP
#define COMMANDS_HPP

#include <functional>
#include <iostream>
#include <map>
#include <vector>
#include "polygon.hpp"

namespace allaberdiev
{
  void count(std::ostream&,
      std::istream&,
      const std::vector< Polygon >&,
      const std::map< std::string, std::function< bool(const Polygon&) > >&);

  void getArea(std::ostream&,
      std::istream&,
      const std::vector< Polygon >&,
      const std::map< std::string, std::function< bool(const Polygon&) > >&);

  void findMax(std::ostream& out, std::istream& in,
      const std::vector< Polygon >& polygons_vector);

  void findMin(std::ostream& out, std::istream& in,
      const std::vector< Polygon >& polygons_vector);

  void rmEchoCommand(std::ostream& out, std::istream& in,
      std::vector< Polygon >& polygons);

  void rectsCommand(std::ostream& out,
      const std::vector< Polygon >& polygons);

  void rightShapesCommand(std::ostream& out,
      const std::vector< Polygon >& polygons);

  bool isRectangle(const Polygon& polygon);

  bool hasRightAngle(const Polygon& polygon);

  bool isRightAngle(const Point& A, const Point& B, const Point& C);

  bool rightAngleAtVertex(const Polygon& polygon, const Point& A);

}

#endif