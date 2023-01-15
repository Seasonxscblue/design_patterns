#pragma once

#include "Observer.h"
#include "SpreadsheetModel.h"

class PieChartView : public Observer
{
public:
	explicit PieChartView(SpreadsheetModel& model) : model_{ model } {}

	std::byte Id() override
	{
		return static_cast<std::byte>(3);
	}

	void Update() override
	{
		std::cout << "Update of PieChartView." << std::endl;
	}

private:
	SpreadsheetModel& model_;
};
