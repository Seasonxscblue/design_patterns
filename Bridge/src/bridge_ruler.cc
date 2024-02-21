#include "bridge_circle_ruler.h"
#include "bridge_square_ruler.h"
#include "bridge_triangle_ruler.h"
#include <fmt/printf.h>

namespace bridge {

void CircleRuler::Regularize() { fmt::println("circle"); }

void SquareRuler::Regularize() { fmt::println("square"); }

void TriangleRuler::Regularize() { fmt::println("triangle"); }

} // namespace bridge