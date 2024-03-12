#include "observer_spreadsheetmodel.h"
#include <format>
#include <iostream>

void observer::SpreadsheetModel::ChangeCellValue(std::string_view column,
                                                 const int row,
                                                 const double value) {
  std::cout << std::format("Cell[{:s}, {:d}] = {:3.7f}\n", column, row, value);
  NotifyAllObservers();
}