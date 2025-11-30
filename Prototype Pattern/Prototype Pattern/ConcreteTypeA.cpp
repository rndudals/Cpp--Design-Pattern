
#include "ConcreteTypeA.h"
#include <iostream>

std::unique_ptr<Prototype> ConcreteTypeA::clone() const
{
    return std::make_unique<ConcreteTypeA>(*this);
}

void ConcreteTypeA::print() const
{
    std::cout << "ConcreteTypeA: num_ = " << num_ << std::endl;
}
