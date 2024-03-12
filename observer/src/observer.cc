#include "observer_barchartview.h"
#include "observer_piechartview.h"
#include "observer_tableview.h"
#include <format>
#include <iostream>

void observer::BarChartView::Update() {
  std::cout << std::format("Update of {:>12s}.\n", "BarChartView");
}

void observer::PieChartView::Update() {
  std::cout << std::format("Update of {:>12s}.\n", "PieChartView");
}

void observer::TableView::Update() {
  std::cout << std::format("Update of {:>12s}.\n", "TableView");
}