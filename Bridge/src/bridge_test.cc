#include "bridge_black_pen.h"
#include "bridge_circle_ruler.h"
#include "bridge_square_ruler.h"
#include "bridge_triangle_ruler.h"
#include "bridge_white_pen.h"
#include <iostream>

int main() {
  std::make_unique<bridge::WhitePen>(std::make_unique<bridge::CircleRuler>())
      ->Draw();
  std::make_unique<bridge::WhitePen>(std::make_unique<bridge::SquareRuler>())
      ->Draw();
  std::make_unique<bridge::WhitePen>(std::make_unique<bridge::TriangleRuler>())
      ->Draw();

  std::cout << std::endl;
  std::make_unique<bridge::BlackPen>(std::make_unique<bridge::CircleRuler>())
      ->Draw();
  std::make_unique<bridge::BlackPen>(std::make_unique<bridge::SquareRuler>())
      ->Draw();
  std::make_unique<bridge::BlackPen>(std::make_unique<bridge::TriangleRuler>())
      ->Draw();
  return 0;
}