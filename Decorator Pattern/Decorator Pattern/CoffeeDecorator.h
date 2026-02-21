#pragma once

#include "Coffee.h"

class CoffeeDecorator : public Coffee{

protected:
	Coffee* coffee_;

public:
	CoffeeDecorator(Coffee* coffee);
	virtual ~CoffeeDecorator();
};