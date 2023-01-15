#pragma once

#include "Observer.h"
#include "SpreadsheetModel.h"

class TableView : public Observer
{
public:
	explicit TableView(SpreadsheetModel& model) : model_{ model } {}

	std::byte Id() override
	{
		return static_cast<std::byte>(1);
	}

	void Update() override
	{
		std::cout << "Update of TableView." << std::endl;
	}

private:
	SpreadsheetModel& model_;
};
