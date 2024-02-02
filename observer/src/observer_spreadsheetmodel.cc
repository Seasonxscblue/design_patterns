#include "observer_spreadsheetmodel.h"
#include <fmt/printf.h>

void observer::SpreadsheetModel::ChangeCellValue(std::string_view column,
                                                 const int row,
                                                 const double value) {
  fmt::println("Cell [{:s}, {:d}] = {:3.7f}", column, row, value);
  NotifyAllObservers();
}