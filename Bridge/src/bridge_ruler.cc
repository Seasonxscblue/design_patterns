#include "bridge_circle_ruler.h"
#include "bridge_square_ruler.h"
#include "bridge_triangle_ruler.h"
#include <iostream>

namespace bridge {

void CircleRuler::Regularize() { std::cout << "circle" << std::endl; }

void SquareRuler::Regularize() { std::cout << "square" << std::endl; }

void TriangleRuler::Regularize() { std::cout << "triangle" << std::endl; }

} // namespace bridge