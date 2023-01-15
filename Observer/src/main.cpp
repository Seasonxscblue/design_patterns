#include "SpreadsheetModel.h"
#include "TableView.h"
#include "BarChartView.h"
#include "PieChartView.h"

int main()
{
	SpreadsheetModel spread_sheet_model{};

	ObserverPtr observer1 = std::make_shared<TableView>(spread_sheet_model);
	spread_sheet_model.Attach(observer1);

	ObserverPtr observer2 = std::make_shared<BarChartView>(spread_sheet_model);
	spread_sheet_model.Attach(observer2);

	spread_sheet_model.ChangeCellValue("A", 1, 42);

	spread_sheet_model.Detach(observer1);

	spread_sheet_model.ChangeCellValue("B", 2, 23.1);

	ObserverPtr observer3 = std::make_shared<PieChartView>(spread_sheet_model);
	spread_sheet_model.Attach(observer3);

	spread_sheet_model.ChangeCellValue("C", 3, 3.1415926);

	return 0;
}
