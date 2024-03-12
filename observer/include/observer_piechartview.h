#ifndef OBSERVER_PIECHARTVIEW_H_
#define OBSERVER_PIECHARTVIEW_H_

#include "observer_interface.h"
#include "observer_spreadsheetmodel.h"

namespace observer {

class PieChartView : public ObserverInterface {
 public:
  explicit PieChartView(SpreadsheetModel &model) : model_{model} {}
  void Update() override;

 private:
  SpreadsheetModel &model_;
};

} // namespace observer

#endif // OBSERVER_PIECHARTVIEW_H_
