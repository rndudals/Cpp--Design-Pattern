#pragma once

#include "CoffeeDecorator.h"

class MilkDecorator : public CoffeeDecorator {
public:
	explicit MilkDecorator(Coffee* coffee);

	std::string getDescription() const override;
	double cost() const override;
};