#include "SugarDecorator.h"

SugarDecorator::SugarDecorator(Coffee* coffee)
    : CoffeeDecorator(coffee)
{
}

std::string SugarDecorator::getDescription() const
{
    return coffee_->getDescription() + " + Sugar";
}

double SugarDecorator::cost() const
{
    return coffee_->cost() + 2.1;
}
