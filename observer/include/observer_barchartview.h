#ifndef OBSERVER_BARCHARTVIEW_H_
#define OBSERVER_BARCHARTVIEW_H_

#include "observer_interface.h"
#include "observer_spreadsheetmodel.h"

namespace observer {

class BarChartView : public ObserverInterface {
 public:
  explicit BarChartView(SpreadsheetModel &model) : model_{model} {}
  ViewElement Id() override;
  void Update() override;

private:
  SpreadsheetModel &model_;
};

}

#endif // OBSERVER_BARCHARTVIEW_H_