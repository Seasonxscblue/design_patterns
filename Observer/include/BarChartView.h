#pragma once

#include "Observer.h"
#include "SpreadsheetModel.h"

class BarChartView : public Observer
{
public:
	explicit BarChartView(SpreadsheetModel& model) : model_{model}
	{
	}

	std::byte Id() override
	{
		return static_cast<std::byte>(2);
	}

	void Update() override
	{
		std::cout << "Update of BarChartView." << std::endl;
	}

private:
	SpreadsheetModel& model_;
};
