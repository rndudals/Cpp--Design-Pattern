#pragma once

#include "CoffeeDecorator.h"

CoffeeDecorator::CoffeeDecorator(Coffee* coffee)
	:coffee_(coffee)
{
}

CoffeeDecorator::~CoffeeDecorator()
{
	delete coffee_;
}
