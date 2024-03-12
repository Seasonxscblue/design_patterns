#ifndef OBSERVER_SPREADSHEETMODEL_H_
#define OBSERVER_SPREADSHEETMODEL_H_

#include "observer_subject.h"
#include <iostream>
#include <string_view>

namespace observer {

class SpreadsheetModel : public Subject {
 public:
  SpreadsheetModel() = default;
  ~SpreadsheetModel() = default;
  void ChangeCellValue(std::string_view column, const int row,
                       const double value);
};

} // namespace observer

#endif // OBSERVER_SPREADSHEETMODEL_H_