#ifndef OBSERVER_TABLEVIEW_H_
#define OBSERVER_TABLEVIEW_H_

#include "observer_interface.h"
#include "observer_spreadsheetmodel.h"

namespace observer {

class TableView : public ObserverInterface {
 public:
  explicit TableView(SpreadsheetModel &model) : model_{model} {}
  ViewElement Id() override;
  void Update() override;

 private:
  SpreadsheetModel &model_;
};

}

#endif // OBSERVER_TABLEVIEW_H_