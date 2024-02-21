#include "bridge_pen.h"
#include "bridge_black_pen.h"
#include "bridge_white_pen.h"
#include <fmt/printf.h>

namespace bridge {

Pen::Pen(RulerInterfacePtr ruler) { ruler_ = std::move(ruler); }

void BlackPen::Draw() {
  fmt::print("Black ");
  ruler_->Regularize();
}

void WhitePen::Draw() {
  fmt::print("White ");
  ruler_->Regularize();
}

} // namespace bridge