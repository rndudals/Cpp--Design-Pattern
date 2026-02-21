#pragma once

#include "CoffeeDecorator.h"

class SugarDecorator : public CoffeeDecorator {
public:
	explicit SugarDecorator(Coffee* coffee);

	std::string getDescription() const override;
	double cost() const override;
};