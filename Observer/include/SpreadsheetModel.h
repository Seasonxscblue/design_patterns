#pragma once

#include <iostream>
#include <string_view>
#include "Subject.h"


class SpreadsheetModel : public Subject
{
public:
	void ChangeCellValue(std::string_view column, const int row, const double value)
	{
		std::cout << "Cell [" << column << ", " << row << "] = " << value << std::endl;
		NotifyAllObservers();
	}
};
