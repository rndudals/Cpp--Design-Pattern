#include <iostream>
#include "SimpleCoffee.h"
#include "MilkDecorator.h"
#include "SugarDecorator.h"

int main() {
	Coffee* coffee = new SimpleCoffee();

	coffee = new MilkDecorator(coffee);
	coffee = new MilkDecorator(coffee);

	coffee = new SugarDecorator(coffee);

	std::cout << coffee->getDescription() << std::endl;
	std::cout << coffee->cost() << std::endl;

	delete coffee;
}