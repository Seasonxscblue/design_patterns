#include "observer_barchartview.h"
#include "observer_piechartview.h"
#include "observer_tableview.h"
#include <fmt/printf.h>


observer::ViewElement observer::BarChartView::Id() {
  return observer::ViewElement::kBarChartView;
}

void observer::BarChartView::Update() {
  fmt::println("Update of {:>12s}.", "BarChartView");
}

observer::ViewElement observer::PieChartView::Id() {
  return observer::ViewElement::kPieChartView;
}

void observer::PieChartView::Update() {
  fmt::println("Update of {:>12s}.", "PieChartView");
}

observer::ViewElement observer::TableView::Id() {
  return observer::ViewElement::kTableView;
}

void observer::TableView::Update() {
  fmt::println("Update of {:>12s}.", "TableView");
}