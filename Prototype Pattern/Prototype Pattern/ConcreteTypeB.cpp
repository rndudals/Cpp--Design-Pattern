#include "ConcreteTypeB.h"
#include <iostream>

std::unique_ptr<Prototype> ConcreteTypeB::clone() const
{
    return std::make_unique<ConcreteTypeB>(*this);
}

void ConcreteTypeB::print() const
{
    std::cout << "ConcreteTypeB: st_ = " << st_ << std::endl;
}
