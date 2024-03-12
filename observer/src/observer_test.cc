#include "observer_barchartview.h"
#include "observer_piechartview.h"
#include "observer_tableview.h"

int main() {
  auto spread_sheet_model{observer::SpreadsheetModel{}};

  observer::ObserverInterfacePtr observer1{
      std::make_shared<observer::TableView>(spread_sheet_model)};
  observer::ObserverInterfacePtr observer2{
      std::make_shared<observer::BarChartView>(spread_sheet_model)};
  observer::ObserverInterfacePtr observer3{
      std::make_shared<observer::PieChartView>(spread_sheet_model)};

  spread_sheet_model.Attach(observer1);
  spread_sheet_model.Attach(observer2);
  spread_sheet_model.ChangeCellValue("A", 1, 42);
  spread_sheet_model.Detach(observer1);
  spread_sheet_model.ChangeCellValue("B", 2, 23.1);
  spread_sheet_model.Attach(observer3);
  spread_sheet_model.ChangeCellValue("C", 3, 3.1415926);

  return 0;
}
