#include "MilkDecorator.h"

MilkDecorator::MilkDecorator(Coffee* coffee)
    : CoffeeDecorator(coffee)
{
}

std::string MilkDecorator::getDescription() const
{
    return coffee_->getDescription() + " + Milk";
}

double MilkDecorator::cost() const
{
    return coffee_->cost() + 1.0;
}
