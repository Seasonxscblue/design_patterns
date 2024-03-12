#include "bridge_pen.h"
#include "bridge_black_pen.h"
#include "bridge_white_pen.h"
#include <iostream>

namespace bridge {

Pen::Pen(RulerInterfacePtr ruler) { ruler_ = std::move(ruler); }

void BlackPen::Draw() {
  std::cout << "Black ";
  ruler_->Regularize();
}

void WhitePen::Draw() {
  std::cout << "White ";
  ruler_->Regularize();
}

} // namespace bridge